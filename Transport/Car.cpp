#include "Car.h"

Car::Car(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel)
    : Transport(speed, passengers, fuel) 
{
    this->id = ++Car::count;
    this->model = model;
    this->engine = engine;
    this->transmission = transmission;
    this->body = body;
}

Car Car::InputCar()
{
    Model model = Model::InputModel();
    Engine engine = Engine::InputEngine();
    Transmission transmission = Transmission::InputTransmission();
    Body body = Body::InputBody();


    int speed;
    cout << "Введите максимальную скорость машины:\t";
    cin >> speed;

    int passengers;
    cout << "Введите пассажировместимость:\t";
    cin >> passengers;

    float fuel;
    cout << "Введите объём бака:\t";
    cin >> fuel;

        
    Car car(model, engine, transmission, body, speed, passengers, fuel);
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


void Car::Move()
{
    cout << "\n*Машина едет*\n";
}

int Car::GetSpeed()
{
    return this->speed;
}

int Car::GetMaxPassengers()
{
    cout << "\nВызов GetMaxPassengers() в производном классе\n";
    return this->GetMaxPassengers();
}

float Car::GetMaxFuelLevel()
{   
    return this->Transport::GetMaxFuelLevel();
}

ostream& operator<<(ostream& stream, Car& car)
{
    return stream << car.GetModel();
}

Car& Car::operator = (const Transport& other)
{
    // Присваиваем только данные базового класса
    Transport::operator=(other);
    
    return *this;
}