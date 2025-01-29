#include "Model.h"

Model::Model(string brand, string modelName, string country)
{
    this->id = ++Model::count;
    this->brand = brand;
    this->model = modelName;
    this->country = country;
}

Model Model::InputModel()
{
    string brand;
    string modelName;
    string country;

    cout << "Марка автомобиля:\t";
    cin >> brand;
    cout << "Модель автомобиля:\t";
    cin >> modelName;
    cout << "Страна производитель:\t";
    cin >> country;

    Model model(brand, modelName, country);
    return model;
}

void Model::PrintModel()
{
    cout << "Марка автомобиля:\t" << this->brand << "\n";
    cout << "Модель автомобиля:\t" << this->model << "\n";
    cout << "Страна производитель:\t" << this->country << "\n";
}

string Model::GetBrand()
{
    return this->brand;
}

string Model::GetModel()
{
    return this->model;
}