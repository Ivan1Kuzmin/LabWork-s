#ifndef CAR
#define CAR

#include "Body.h"
#include "Engine.h"
#include "Model.h"
#include "Transmission.h"
#include "Transport.h"

// ������
class Car : Transport
{
private:
    int id;
    Model model;
    Engine engine;
    Transmission transmission;
    Body body;

public:
    static int count; // ������ ��� id ����������� �� �������
    Car() : id(0) {};
    Car(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel);


    // ���� ������
    static Car InputCar();
    // ����� ������
    void PrintCar();

    // ��������� ��������� (����� ��� ���������� �������)
    Engine GetEngine();
    // ��������� ������� ������� (����� ��� ���������� �������)
    Transmission GetTransmission();
    // ��������� ������ (����� ��� ���������� �������)
    Model GetModel();

    // ��������������� ������� �������� ������
    void Move() override; // ������������
    int GetSpeed() override; // �������� ��������
    int GetMaxPassengers() override; // �������� ���������� ����������
    float GetMaxFuelLevel() override; // �������� ������� �������

    // �������� ������������ ��� ������� �������� ������
    Car& operator = (const Transport& other);
};

ostream& operator<<(ostream& stream, Car& car);

#endif // !CAR