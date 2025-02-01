#ifndef TRANSPORT 
#define TRANSPORT

#include <iostream>
#include <string>
using namespace std;

// ����������� ����� "���������"
class Transport
{
protected:
	int speed; // ��������
	int passengersNumber; // ���������� ����������
	float fuelLevel; // ������� �������
public:
	Transport() {};
	Transport(int speed, int passengers, float fuel) : 
		speed(speed), passengersNumber(passengers), fuelLevel(fuel) {};

	// �������� ������������
	Transport& operator=(const Transport& other);

	virtual void Move() = 0; // ������������
	virtual int GetSpeed() = 0; // �������� ������� �������� ������������

	// �������� ������������ ���������� ����������
	virtual int GetMaxPassengers()
	{
		cout << "\n����� GetMaxPassengers() � ������� ������\n";
		return this->passengersNumber;
	};

	// �������� ������������ ������� �������
	virtual float GetMaxFuelLevel() { return this->fuelLevel; }; 
};

#endif // 