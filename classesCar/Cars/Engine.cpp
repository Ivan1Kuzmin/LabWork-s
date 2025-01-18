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

    cout << "Модель двигателя:\t";
    cin >> model;
    do
    {
        cout << "Тип двигателя (Напишите цифру: 1-бензиновый, 2-дизельный):\t";
        cin >> typeId;
    } while (typeId != 1 && typeId != 2);

    cout << "Мощность:\t";
    cin >> horsePowers;
    cout << "Количество цилиндров:\t";
    cin >> valueCylindres;

    Engine engine(model, typeId, horsePowers, valueCylindres);
    return engine;
}

void Engine::PrintEngine()
{
    cout << "Модель двигателя:\t" << this->model << "\n";
    cout << "Тип двигателя:\t";
    if (this->typeId == 1)
    {
        cout <<  "бензиновый\n";
    }
    else
    {
        cout << "дизельный\n";
    }
    cout << "Мощность:\t" << this->horsePowers << "\n";
    cout << "Количество цилиндров:\t" << this->valueCylindres << "\n";
}

int Engine::GetHorsePowers()
{
    return this->horsePowers;
}