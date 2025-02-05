#include "Moto.h"

Moto Moto::InputMoto()
{
    Model model = Model::InputModel();
    Engine engine = Engine::InputEngine();
    Transmission transmission = Transmission::InputTransmission();
    Body body = Body::InputBody();


    int speed;
    cout << "������������ ��������:\t";
    cin >> speed;

    int passengers;
    cout << "��������������������:\t";
    cin >> passengers;

    float fuel;
    cout << "����� ����:\t";
    cin >> fuel;


    Moto moto(model, engine, transmission, body, speed, passengers, fuel);
    return moto;
}

string Moto::WhatTransport()
{
    return "\n��������.\n";
}

void Moto::Move()
{
    cout << "\n****�������� ����****\n";
}