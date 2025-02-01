#include "Car.h"
#include <locale.h>
#include <Windows.h>


// ПРИКЛАДНЫЕ ФУНКЦИИ

// Получение автомобиля с самой высокой мощностью двигателя
Car GetMaxPowerCar(Car* cars, int &count)
{
	Car car = cars[0];

	for (int i = 1; i < count; i++)
	{
		if (car.GetEngine().GetHorsePowers() < cars[i].GetEngine().GetHorsePowers())
		{
			car = cars[i];
		}
	}

	return car;
}

// Вывод автомобилей с определённой коробкой передач
void PrintCarByTransmission(Car* cars, int &count, int type)
{
	if (type == 1)
	{
		cout << "\nАвтомобили с механической коробкой передач:\n";
	}
	if (type == 2)
	{
		cout << "\nАвтомобили с автоматической коробкой передач:\n";
	}

	for (int i = 0; i < count; i++)
	{
		if (cars[i].GetTransmission().GetTypeId() == type)
		{
			cout << cars[i].GetModel().GetBrand() << " " << cars[i].GetModel().GetModel() << "\n";
				
		}
	}
}

// Изменение количества передач
void SetGears(Transmission& transmission, int gears)
{	
	transmission.gears = gears;	
}

// Вывод всех машин
void PrintCars(Car* car, int& count)
{
	for (int i = 0; i < count; i++)
	{
		car[i].PrintCar();
		cout << "\n";
	}
}

int Body::count = 0;
int Car::count = 0;
int Engine::count = 0;
int Model::count = 0;
int Transmission::count = 0;



int main()
{
	system("chcp 1251");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int carCount;
	cout << "Сколько машин вы хотите ввести:\t";
	cin >> carCount;

	Car* cars = new Car[carCount];

	for (int i = 0; i < carCount; i++)
	{
		cout << "\n";
		Car car = Car::InputCar();
		cars[i] = car;
	}

	//Car maxPowerCar = GetMaxPowerCar(cars, carCount);
	//cout << "Автомобиль с самой высокой мощностью двигателя:\n";
	//maxPowerCar.PrintCar();

	//PrintCarByTransmission(cars, carCount, 1);
	//PrintCarByTransmission(cars, carCount, 2);

	//cout << "\nСписок всех машин\n";
	//PrintCars(cars, carCount);

	//cout << "\nКоличество колес:\t" << maxPowerCar.


	Transport* transport = (Transport*)cars;
	cout << "\nОбъем бака первой машины: " << transport->GetMaxFuelLevel() << "\n";

	return 0;
}