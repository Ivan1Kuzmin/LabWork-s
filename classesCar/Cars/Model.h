#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Модель автомобиля
class Model
{
private:
    int id;
    char brand[64]; // Марка (например, KIA)
    char model[64];  // Модель автомобиля 
    char country[64];   // Страна производитель   
public:
    static int count; // Каждый раз id увеличивает на единицу
    Model() : id(0) {};
    Model(char* brand, char* modelName, char* country);    

    // Ввод модели
    Model InputModel();
    // Вывод модели
    void PrintModel();


    // Получение марки (Нужно для прикладной функции)
    char* GetBrand();
    // Получение модели (Нужно для прикладной функции)
    char* GetModel();
};

