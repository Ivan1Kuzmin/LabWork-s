#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// ������ ����������
class Model
{
private:
    int id;
    string brand; // ����� (��������, KIA)
    string model;  // ������ ���������� 
    string country;   // ������ �������������   
public:
    static int count; // ������ ��� id ����������� �� �������
    Model() : id(0) {};
    Model(string brand, string modelName, string country);

    // ���� ������
    static Model InputModel();
    // ����� ������
    void PrintModel();


    // ��������� ����� (����� ��� ���������� �������)
    string GetBrand();
    // ��������� ������ (����� ��� ���������� �������)
    string GetModel();
};

