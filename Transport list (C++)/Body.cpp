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

    cout << "��� ������:\t";
    type = CheckString(type);
    cout << "���������� ������:\t";
    do
    {
        cin >> doors;
        if (doors < 0)
        {
            cout << "\n������� ������������ �����.\n";
        }
    } while (doors < 0);

    cout << "����:\t";
    color = CheckString(color);

    cout << "��������:\t";
    material = CheckString(material);

    Body body(type, doors, color, material);
    return body;
}

void Body::PrintBody()
{
    cout << "��� ������:\t" << this->type << "\n";
    cout << "���������� ������:\t" << this->doors << "\n";
    cout << "����:\t" << this->color << "\n";
    cout << "�������� ������:\t" << this->material << "\n";
}