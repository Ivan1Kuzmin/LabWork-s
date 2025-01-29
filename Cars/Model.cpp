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

    cout << "����� ����������:\t";
    cin >> brand;
    cout << "������ ����������:\t";
    cin >> modelName;
    cout << "������ �������������:\t";
    cin >> country;

    Model model(brand, modelName, country);
    return model;
}

void Model::PrintModel()
{
    cout << "����� ����������:\t" << this->brand << "\n";
    cout << "������ ����������:\t" << this->model << "\n";
    cout << "������ �������������:\t" << this->country << "\n";
}

string Model::GetBrand()
{
    return this->brand;
}

string Model::GetModel()
{
    return this->model;
}