#include "Car.h"

Car::Car(Model model, Engine engine, Transmission transmission, Body body)
{
    this->id = ++Car::count;
    this->model = model;
    this->engine = engine;
    this->transmission = transmission;
    this->body = body;
}

Car Car::InputCar()
{
    Model model = model.InputModel();
    Engine engine = engine.InputEngine();
    Transmission transmission = transmission.InputTransmission();
    Body body = body.InputBody();
    Car car(model, engine, transmission, body);
    return car;
}

void Car::PrintCar()
{
    this->model.PrintModel();
    this->engine.PrintEngine();
    this->transmission.PrintTransmission();
    this->body.PrintBody();
}

Engine Car::GetEngine()
{
    return this->engine;
}

Model Car::GetModel()
{
    return this->model;
}

Transmission Car::GetTransmission()
{
    return this->transmission;
}