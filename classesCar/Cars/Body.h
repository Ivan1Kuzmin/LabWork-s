#pragma once
#include <string.h>
#include <iostream>
using namespace std;

// �����
class Body
{
private:
    int id;
    char type[48]; // ��� ������ (��������, "�����", "�������")
    int doors; // ���������� ������
    char color[64]; // ���� ������ (��������, "�����")
    char material[64]; // �������� ������ (��������, "������", "����������")
public:
    static int count; // ������ ��� id ����������� �� �������
    Body() : id(0) {};
    Body(char* typeName, int doors, char* color, char* material);

    // ���� ������
    Body InputBody();
    // ����� ������
    void PrintBody();
};

