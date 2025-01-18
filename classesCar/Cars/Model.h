#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ������ ����������
class Model
{
private:
    int id;
    char brand[64]; // ����� (��������, KIA)
    char model[64];  // ������ ���������� 
    char country[64];   // ������ �������������   
public:
    static int count; // ������ ��� id ����������� �� �������
    Model() : id(0) {};
    Model(char* brand, char* modelName, char* country);    

    // ���� ������
    Model InputModel();
    // ����� ������
    void PrintModel();


    // ��������� ����� (����� ��� ���������� �������)
    char* GetBrand();
    // ��������� ������ (����� ��� ���������� �������)
    char* GetModel();
};

