#include "Car.h"
#include "Moto.h"
#include <locale.h>
#include <Windows.h>
#include <vector>
#include <memory>

// ����������� numeric_limits<streamsize>::max() � Windows.h
#ifdef max
#undef max
#endif


// ���������� �������
 
// ������� ��������� ��������� (������� ���������� ��� ������� ������ ��������� ��� ������)
void PrintTransports(vector<unique_ptr<Transport>>& transports)
{
	int i = 1;
	for (auto& transport : transports)
	{
		std::cout << "\n\n��������� ��� �������:\t" << i++ << "\n";
		transport->Print();
	}
}

// ������� �������� ��� ������
void PrintTransports(vector<unique_ptr<Transport>>& transports, string whatIs)
{
	Car car;
	Moto moto;

	if (whatIs == car.WhatTransport())
	{
		std::cout << "\n\n������ �����:\n";
		for (auto& transport : transports)
		{
			if (transport->WhatTransport() == car.WhatTransport())
			{
				transport->Print();
				std::cout << "\n";
			}
		}
	}
	else
	{
		std::cout << "\n\n������ ����������:\n";
		for (auto& transport : transports)
		{
			if (transport->WhatTransport() == moto.WhatTransport())
			{
				transport->Print();
				std::cout << "\n";
			}
		}
	}
}
 
// ������� ������ ����� � ������������ ��������� (������ ���������, ��� �������)
void PrintTransportsByTransmission(vector<unique_ptr<Transport>>& transports, int type)
{
	Car car;

	if (type == 1)
	{
		cout << "\n������ � ������������ ��������:\n";
	}
	else
	{
		cout << "\n������ � �������������� ��������:\n";
	}

	for (auto& transport : transports)
	{
		if (transport->WhatTransport() == car.WhatTransport())
		{


			if (transport->GetTransmission().GetTypeId() == type)
			{
				cout << transport->GetModel().GetBrand() << " " << transport->GetModel().GetModel() << "\n";
			}
		}
	}
}


// ��������� ������� ���������� (������ ��� ���������)
int GetTransportIndex(vector<unique_ptr<Transport>>& transports, string whatis)
{
	for (int i = 0 ; i < transports.size(); i++)
	{
		if (transports[i]->WhatTransport() == whatis)
		{
			return i;
		}
	}
}

// ������� ����� ������ �������� ��� ����� ������ ������
void PrintPowerestTransport(vector<unique_ptr<Transport>>& transports, string whatIs)
{
	
	Car car;
	Moto moto;
	int needIndex;

	if (whatIs == car.WhatTransport())
	{
		needIndex = GetTransportIndex(transports, car.WhatTransport());
		cout << "\n\n����� ������ ������:\n";
	}
	else
	{
		needIndex = GetTransportIndex(transports, moto.WhatTransport());
		cout << "\n\n����� ������ ��������:\n";
	}

	unique_ptr<Transport> temp{make_unique<Transport>(transports[needIndex]->GetModel(),
													   transports[needIndex]->GetEngine(), 
													   transports[needIndex]->GetTransmission(), 
													   transports[needIndex]->GetBody(),
													   transports[needIndex]->GetMaxSpeed(),
													   transports[needIndex]->GetPassengers(),
													   transports[needIndex]->GetFuel()) };


	for (int i = 1; i < transports.size(); i++)
	{
		if (transports[i]->WhatTransport() == whatIs)
		{
			if (temp->GetEngine().GetHorsePowers() < transports[i]->GetEngine().GetHorsePowers())
			{
				temp->SetModel(transports[i]->GetModel());
				temp->SetEngine(transports[i]->GetEngine());
				temp->SetTransmission(transports[i]->GetTransmission());
				temp->SetBody(transports[i]->GetBody());
				temp->SetMaxSpeed(transports[i]->GetMaxSpeed());
				temp->SetPassengers(transports[i]->GetPassengers());
				temp->SetFuel(transports[i]->GetFuel());

			}
		}
	}
	temp->Print();
	
 }

// ������� ���������
void TransportDelete(vector<unique_ptr<Transport>>& transports, int index)
{
	if (index > transports.size())
	{
		cout << "\n� ������ ��� ������ ��� ����� �������.";
	}
	else
	{
		transports.erase(transports.begin() + index);
	}
}

// ���������� �� ������ ���� (�� �����������)
void sort(vector<unique_ptr<Transport>>& transports)
{
	int size = transports.size();
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (transports[j + 1]->GetFuel() < transports[j]->GetFuel())
			{
				swap(transports[j], transports[j + 1]);
			}
		}
	}
}




int Body::count = 0;
int Engine::count = 0;
int Transmission::count = 0;
int Model::count = 0;
int Car::count = 0;
int Moto::count = 0;

int main()
{
	system("chcp 1251");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// ���������, � ������� �������� ������� �������� � ��������� �������
	vector<unique_ptr<Transport>> transports;

	cout << "\n������� ��������� ������\n";
	Car car = Car::InputCar();
	transports.push_back(make_unique<Car>(car.GetModel(), car.GetEngine(), car.GetTransmission(), car.GetBody(), car.GetMaxSpeed(), car.GetPassengers(), car.GetFuel()));

	cout << "\n������� ��������� ���������\n";
	Moto moto = Moto::InputMoto();
	transports.push_back(make_unique<Moto>(moto.GetModel(), moto.GetEngine(), moto.GetTransmission(), moto.GetBody(), moto.GetMaxSpeed(), moto.GetPassengers(), moto.GetFuel()));


	sort(transports);

	cout << "\n���������� �� �����������\n";
	for (auto& transport : transports)
	{
		transport->Print();
		cout << "\n";
	}
	

	return 0;
}