#pragma once
#include <string.h>
#include "CheckInput.h"
using namespace std;

// ������� �������
class Transmission
{
private:
    int id;
    int typeId; // ��� ������� ("������������", "��������������")
    int gears; // ���������� �������
public:
    static int count; // ������ ��� id ����������� �� �������
    Transmission() : id(0) {};
    Transmission(int typeId, int gears);

    // ���� � �������
    static Transmission InputTransmission();
    // ����� �� �������
    void PrintTransmission();

    // �������� ��� �������
    int GetTypeId();
};
