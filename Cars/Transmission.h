#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ������� �������
class Transmission
{
    // ��������� ���������� �������
    friend void SetGears(Transmission&, int gears);
private:
    int id;
    int typeId; // ��� ����������� ("������������", "��������������")
    int gears; // ���������� �������
public:
    static int count; // ������ ��� id ����������� �� �������
    Transmission() : id(0) {};
    Transmission(int typeId, int gears);

    // ���� �������
    static Transmission InputTransmission();
    // ����� ������� ������� �� �������
    void PrintTransmission();

    // ��������� ���� ������� �������� (����� ��� ���������� �������)
    int GetTypeId();

    // ���������� �������� (���������� ���������� ������� �� �������)
    Transmission& operator ++();
    // ����������� �������� (���������� ���������� ������� �� �������)
    Transmission operator++ (int);
};
