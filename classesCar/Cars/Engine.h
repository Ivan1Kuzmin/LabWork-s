#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ���������
class Engine
{
private:
    int id;  // �������������
    char model[32]; // �������� ������ ���������
    int typeId; // ��� ��������� (���������� ��� ���������)
    int horsePowers; // �������� ��������� � ��������� �����
    int valueCylindres; // ����� ���������
public:
    static int count; // ������ ��� id ����������� �� �������
    Engine() : id(0) {};
    Engine(char* model, int typeId, int horsePowers, int valueCylindres);

    // ���� ��������� 
    Engine InputEngine();
    // ����� ��������� �� �������
    void PrintEngine();

    // ��������� �������� (����� ��� ���������� �������)
    int GetHorsePowers();
};
