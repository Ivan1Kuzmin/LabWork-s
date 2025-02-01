#include "Car.h"
#include <locale.h>
#include <Windows.h>


// ���������� �������

// ��������� ���������� � ����� ������� ��������� ���������
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

// ����� ����������� � ����������� �������� �������
void PrintCarByTransmission(Car* cars, int &count, int type)
{
	if (type == 1)
	{
		cout << "\n���������� � ������������ �������� �������:\n";
	}
	if (type == 2)
	{
		cout << "\n���������� � �������������� �������� �������:\n";
	}

	for (int i = 0; i < count; i++)
	{
		if (cars[i].GetTransmission().GetTypeId() == type)
		{
			cout << cars[i].GetModel().GetBrand() << " " << cars[i].GetModel().GetModel() << "\n";
				
		}
	}
}

// ��������� ���������� �������
void SetGears(Transmission& transmission, int gears)
{	
	transmission.gears = gears;	
}

// ����� ���� �����
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
	cout << "������� ����� �� ������ ������:\t";
	cin >> carCount;

	Car* cars = new Car[carCount];

	for (int i = 0; i < carCount; i++)
	{
		cout << "\n";
		Car car = Car::InputCar();
		cars[i] = car;
	}

	//Car maxPowerCar = GetMaxPowerCar(cars, carCount);
	//cout << "���������� � ����� ������� ��������� ���������:\n";
	//maxPowerCar.PrintCar();

	//PrintCarByTransmission(cars, carCount, 1);
	//PrintCarByTransmission(cars, carCount, 2);

	//cout << "\n������ ���� �����\n";
	//PrintCars(cars, carCount);

	//cout << "\n���������� �����:\t" << maxPowerCar.


	Transport* transport = (Transport*)cars;
	cout << "\n����� ���� ������ ������: " << transport->GetMaxFuelLevel() << "\n";

	return 0;
}