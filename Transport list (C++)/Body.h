#pragma once
#include <string>
#include <iostream>
#include "CheckInput.h"
using namespace std;

// �����
class Body
{
private:
    int id;
    string type; // ��� ������
    int doors; // ���������� ������
    string color; // ����
    string material; // ��������
public:
    static int count; // ������ ��� id ����������� �� �������
    Body() : id(0) {};
    Body(string typeName, int doors, string color, string material);

    // ���� � �������
    static Body InputBody();
    // ����� �� �������
    void PrintBody();
};



