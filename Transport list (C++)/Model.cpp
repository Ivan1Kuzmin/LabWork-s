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

    cout << "�����:\t";
    brand = CheckString(brand);
    cout << "������:\t";
    modelName = CheckString(modelName);
    cout << "������ �������������:\t";
    country = CheckString(country);

    Model model(brand, modelName, country);
    return model;
}

void Model::PrintModel()
{
    cout << "�����:\t" << this->brand << "\n";
    cout << "������:\t" << this->model << "\n";
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

string Model::GetCountry()
{
    return this->country;
}