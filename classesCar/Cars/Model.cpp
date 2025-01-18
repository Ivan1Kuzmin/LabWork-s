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

char* Model::GetBrand()
{
    return this->brand;
}

char* Model::GetModel()
{
    return this->model;
}