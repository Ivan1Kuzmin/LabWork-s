#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Модель автомобиля
class Model
{
private:
    int id;
    string brand; // Марка (например, KIA)
    string model;  // Модель автомобиля 
    string country;   // Страна производитель   
public:
    static int count; // Каждый раз id увеличивает на единицу
    Model() : id(0) {};
    Model(string brand, string modelName, string country);

    // Ввод модели
    static Model InputModel();
    // Вывод модели
    void PrintModel();


    // Получение марки (Нужно для прикладной функции)
    string GetBrand();
    // Получение модели (Нужно для прикладной функции)
    string GetModel();
};

