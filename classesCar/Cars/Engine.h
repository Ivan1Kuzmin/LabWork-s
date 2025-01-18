#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Двигатель
class Engine
{
private:
    int id;  // Идентификатор
    char model[32]; // Название модели двигателя
    int typeId; // Тип двигателя (бензиновый или дизельный)
    int horsePowers; // Мощность двигателя в лошадиных силах
    int valueCylindres; // Число цилиндров
public:
    static int count; // Каждый раз id увеличивает на единицу
    Engine() : id(0) {};
    Engine(char* model, int typeId, int horsePowers, int valueCylindres);

    // Ввод двигателя 
    Engine InputEngine();
    // Вывод двигателя на консоль
    void PrintEngine();

    // Получение мощности (Нужна для прикладной функции)
    int GetHorsePowers();
};
