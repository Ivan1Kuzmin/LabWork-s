#ifndef CAR
#define CAR

#include "Body.h"
#include "Engine.h"
#include "Model.h"
#include "Transmission.h"
#include "Transport.h"

// Машина
class Car : Transport
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
    Car(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel);


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

    // Переопределение методов базового класса
    void Move() override; // Передвижение
    int GetSpeed() override; // Получить скорость
    int GetMaxPassengers() override; // Получить количество пассажиров
    float GetMaxFuelLevel() override; // Получить уровень топлива

    // Оператор присваивание для объекта базового класса
    Car& operator = (const Transport& other);
};

ostream& operator<<(ostream& stream, Car& car);

#endif // !CAR