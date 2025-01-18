#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Коробка передач
class Transmission
{
private:
    int id;
    int typeId; // Тип трансмиссии ("Механическая", "Автоматическая")
    int gears; // Количество передач
public:
    static int count; // Каждый раз id увеличивает на единицу
    Transmission() : id(0) {};
    Transmission(int typeId, int gears);

    // Ввод коробки
    Transmission InputTransmission();
    // Вывод коробки передач на консоль
    void PrintTransmission();

    // Получение типа коробки передачи (Нужно для прикладной функции)
    int GetTypeId();
};
