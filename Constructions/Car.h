#pragma once
#include "Body.h"
#include "Engine.h"
#include "Model.h"
#include "Transmission.h"

// Машина
class Car
{
private:
    int id;
    Model model;
    Engine engine;
    Transmission transmission;
    Body body;

public:
    static int count; // Каждый раз id увеличивает на единицу
    Car() : id(0) {};
    Car(Model model, Engine engine, Transmission transmission, Body body);

    // Ввод машины
    static Car InputCar();
    // Вывод машина
    void PrintCar();

    // Получение двигателя (Нужно для прикладной функции)
    Engine GetEngine();
    // Получение коробки передач (Нужно для прикладной функции)
    Transmission GetTransmission();
    // Получение модели (Нужно для прикладной функции)
    Model GetModel();
};

