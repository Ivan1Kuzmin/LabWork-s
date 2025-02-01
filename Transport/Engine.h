#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ���������
class Engine
{
private:
    int id;  // �������������
    string model; // �������� ������ ���������
    int typeId; // ��� ��������� (���������� ��� ���������)
    int horsePowers; // �������� ��������� � ��������� �����
    int valueCylindres; // ����� ���������
public:
    static int count; // ������ ��� id ����������� �� �������
    Engine() : id(0) {};
    Engine(string model, int typeId, int horsePowers, int valueCylindres);

    // ���� ��������� 
    static Engine InputEngine();
    // ����� ��������� �� �������
    void PrintEngine();

    // ��������� �������� (����� ��� ���������� �������)
    int GetHorsePowers();
    
    // ���������� �������� �� �������� �����
    void operator + (int number);
};

ostream& operator<<(ostream& stream, Engine engine);
