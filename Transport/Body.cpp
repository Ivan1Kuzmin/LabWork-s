#include "Body.h"

Body::Body(string typeName, int doors, string color, string material)
{
    this->id = ++Body::count;
    this->doors = doors;
    this->type = typeName;
    this->color = color;
    this->material = material;
}

Body Body::InputBody()
{
    string type;
    int doors;
    string color;
    string material;

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