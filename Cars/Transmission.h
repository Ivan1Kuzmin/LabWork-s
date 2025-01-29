#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Коробка передач
class Transmission
{
    // Изменение количества передач
    friend void SetGears(Transmission&, int gears);
private:
    int id;
    int typeId; // Тип трансмиссии ("Механическая", "Автоматическая")
    int gears; // Количество передач
public:
    static int count; // Каждый раз id увеличивает на единицу
    Transmission() : id(0) {};
    Transmission(int typeId, int gears);

    // Ввод коробки
    static Transmission InputTransmission();
    // Вывод коробки передач на консоль
    void PrintTransmission();

    // Получение типа коробки передачи (Нужно для прикладной функции)
    int GetTypeId();

    // Префиксный оператор (Увеличение количества передач на единицу)
    Transmission& operator ++();
    // Постфиксный оператор (Увеличение количества передач на единицу)
    Transmission operator++ (int);
};
