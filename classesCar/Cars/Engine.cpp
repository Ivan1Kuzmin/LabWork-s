#include "Engine.h"

Engine::Engine(char* model, int typeId, int horsePowers, int valueCylindres)
{
    this->id = ++Engine::count;
    strcpy_s(this->model, model);
    this->typeId = typeId;
    this->horsePowers = horsePowers;
    this->valueCylindres = valueCylindres;
}

Engine Engine::InputEngine()
{
    char* model = new char[32];
    int typeId;
    int horsePowers;
    int valueCylindres;

    cout << "������ ���������:\t";
    cin >> model;
    do
    {
        cout << "��� ��������� (�������� �����: 1-����������, 2-���������):\t";
        cin >> typeId;
    } while (typeId != 1 && typeId != 2);

    cout << "��������:\t";
    cin >> horsePowers;
    cout << "���������� ���������:\t";
    cin >> valueCylindres;

    Engine engine(model, typeId, horsePowers, valueCylindres);
    return engine;
}

void Engine::PrintEngine()
{
    cout << "������ ���������:\t" << this->model << "\n";
    cout << "��� ���������:\t";
    if (this->typeId == 1)
    {
        cout <<  "����������\n";
    }
    else
    {
        cout << "���������\n";
    }
    cout << "��������:\t" << this->horsePowers << "\n";
    cout << "���������� ���������:\t" << this->valueCylindres << "\n";
}

int Engine::GetHorsePowers()
{
    return this->horsePowers;
}