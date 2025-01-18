#include "Body.h"

Body::Body(char* typeName, int doors, char* color, char* material)
{
    this->id = ++Body::count;
    this->doors = doors;
    strcpy_s(this->type, typeName);
    strcpy_s(this->color, color);
    strcpy_s(this->material, material);
}

Body Body::InputBody()
{
    char* type = new char[48];
    int doors;
    char* color = new char[64];
    char* material = new char[64];

    cout << "Тип кузова:\t";
    cin >> type;
    cout << "Количество дверей:\t";
    cin >> doors;
    cout << "Цвет кузова:\t";
    cin >> color;
    cout << "Материал кузова:\t";
    cin >> material;

    Body body(type, doors, color, material);
    return body;
}

void Body::PrintBody()
{
    cout << "Тип кузова:\t" << this->type << "\n";
    cout << "Количество дверей:\t" << this->doors << "\n";
    cout << "Цвет кузова:\t" << this->color << "\n";
    cout << "Материал кузова:\t" << this->material << "\n";
}