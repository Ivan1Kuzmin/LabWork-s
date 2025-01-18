#include "Model.h"

Model::Model(char* brand, char* modelName, char* country)
{
    this->id = ++Model::count;
    strcpy_s(this->brand, brand);
    strcpy_s(this->model, modelName);
    strcpy_s(this->country, country);
}

Model Model::InputModel()
{
    char* brand = new char[32];
    char* modelName = new char[64];
    char* country = new char[64];

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

char* Model::GetBrand()
{
    return this->brand;
}

char* Model::GetModel()
{
    return this->model;
}