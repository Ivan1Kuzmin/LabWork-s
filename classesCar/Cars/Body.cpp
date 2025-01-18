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

    cout << "��� ������:\t";
    cin >> type;
    cout << "���������� ������:\t";
    cin >> doors;
    cout << "���� ������:\t";
    cin >> color;
    cout << "�������� ������:\t";
    cin >> material;

    Body body(type, doors, color, material);
    return body;
}

void Body::PrintBody()
{
    cout << "��� ������:\t" << this->type << "\n";
    cout << "���������� ������:\t" << this->doors << "\n";
    cout << "���� ������:\t" << this->color << "\n";
    cout << "�������� ������:\t" << this->material << "\n";
}