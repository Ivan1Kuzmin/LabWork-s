#include "Car.h"


Car Car::InputCar()
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


    Car car(model, engine, transmission, body, speed, passengers, fuel);
    return car;
}

Car* Car::InputCar(const char* c)
{
    Model model = Model::InputModel();
    Engine engine = Engine::InputEngine();
    Transmission transmission = Transmission::InputTransmission();
    Body body = Body::InputBody();


    int speed;
    cout << "������������ ��������\t";
    cin >> speed;

    int passengers;
    cout << "��������������������:\t";
    cin >> passengers;

    float fuel;
    cout << "����� ����:\t";
    cin >> fuel;


    Car* car = new Car(model, engine, transmission, body, speed, passengers, fuel);
    return car;
}

string Car::WhatTransport()
{
    return "\n����������.\n";
}

void Car::Move()
{
    cout << "\n****������ ����****\n";
}