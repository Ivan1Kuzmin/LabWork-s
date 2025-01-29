#pragma once
#include "Body.h"
#include "Engine.h"
#include "Model.h"
#include "Transmission.h"

// ������
class Car
{
private:
    int id;
    Model model;
    Engine engine;
    Transmission transmission;
    Body body;

public:
    static int count; // ������ ��� id ����������� �� �������
    Car() : id(0) {};
    Car(Model model, Engine engine, Transmission transmission, Body body);

    // ���� ������
    static Car InputCar();
    // ����� ������
    void PrintCar();

    // ��������� ��������� (����� ��� ���������� �������)
    Engine GetEngine();
    // ��������� ������� ������� (����� ��� ���������� �������)
    Transmission GetTransmission();
    // ��������� ������ (����� ��� ���������� �������)
    Model GetModel();
};

