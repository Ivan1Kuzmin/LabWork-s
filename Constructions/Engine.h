#pragma once
#include <string.h>
#include "CheckNumbers.h"
using namespace std;

// Двигатель
class Engine
{
private:
    int id;  // Идентификатор
    string model; // Название модели двигателя
    int typeId; // Тип двигателя (бензиновый или дизельный)
    int horsePowers; // Мощность двигателя в лошадиных силах
    int valueCylindres; // Число цилиндров
public:
    static int count; // Каждый раз id увеличивает на единицу
    Engine() : id(0) {};
    Engine(string model, int typeId, int horsePowers, int valueCylindres);

    // Ввод двигателя 
    static Engine InputEngine();
    // Вывод двигателя на консоль
    void PrintEngine();

    // Получение мощности (Нужна для прикладной функции)
    int GetHorsePowers();
    
    // Увеличение мощности на заданное число
    void operator + (int number);
};
