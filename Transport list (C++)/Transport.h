#ifndef TRANSPORT
#define TRANSPORT

#include <string>
#include <iostream>
#include "Engine.h"
#include "Transmission.h"
#include "Model.h"
#include "Body.h"


class Transport
{
protected:
	Engine engine; // ���������
	Transmission transmission; // ������� �������
	Body body; // �����
	Model model; // ������
	int maxSpeed; // ������������ ��������
	int passengersNumber; // ��������������������
	float fuelLevel; // ����� ����

public:
	Transport() {};
	Transport(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, int fuel);

	virtual ~Transport() = default;


	// ����� ����������� � �������
	void Print();

	/////////////////////////

	// ��������� ������������ ��������
	int GetMaxSpeed();
	// ��������� ��������������������
	int GetPassengers();
	// ��������� ������ ����
	float GetFuel();

	// ��������� ���������
	Engine GetEngine();
	// ��������� ������� �������
	Transmission GetTransmission();
	// ��������� ������
	Model GetModel();
	// ��������� ������
	Body GetBody();

	/////////////////////////

	// ���������� ����� ������������ ��������
	void SetMaxSpeed(int speed);
	// ���������� ����� ��������������������
	void SetPassengers(int passengers);
	// ���������� ������ ������ ����
	void SetFuel(float fuel);

	// ���������� ���������
	void SetEngine(Engine other);
	// ���������� ����� ������� �������
	void  SetTransmission(Transmission other);
	// ���������� ����� ������
	void  SetModel(Model other);
	// ���������� ����� ������
	void  SetBody(Body other);



	Transport& operator=(const Transport& other);

	virtual void Move() {};
	virtual string WhatTransport();

};

#endif 