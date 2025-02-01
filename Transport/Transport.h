#ifndef TRANSPORT 
#define TRANSPORT

#include <iostream>
#include <string>
using namespace std;

// Абстрактный класс "Транспорт"
class Transport
{
protected:
	int speed; // Скорость
	int passengersNumber; // Количество пассажиров
	float fuelLevel; // Уровень топлива
public:
	Transport() {};
	Transport(int speed, int passengers, float fuel) : 
		speed(speed), passengersNumber(passengers), fuelLevel(fuel) {};

	// Оператор присваивания
	Transport& operator=(const Transport& other);

	virtual void Move() = 0; // Передвижение
	virtual int GetSpeed() = 0; // Получить среднюю скорость передвижения

	// Получить максимальное количество пассажиров
	virtual int GetMaxPassengers()
	{
		cout << "\nВызов GetMaxPassengers() в базовом классе\n";
		return this->passengersNumber;
	};

	// Получить максимальный уровень топлива
	virtual float GetMaxFuelLevel() { return this->fuelLevel; }; 
};

#endif // 