#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ������� �������
class Transmission
{
private:
    int id;
    int typeId; // ��� ����������� ("������������", "��������������")
    int gears; // ���������� �������
public:
    static int count; // ������ ��� id ����������� �� �������
    Transmission() : id(0) {};
    Transmission(int typeId, int gears);

    // ���� �������
    Transmission InputTransmission();
    // ����� ������� ������� �� �������
    void PrintTransmission();

    // ��������� ���� ������� �������� (����� ��� ���������� �������)
    int GetTypeId();
};
