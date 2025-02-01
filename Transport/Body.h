#pragma once
#include <string.h>
#include <iostream>
using namespace std;

// Кузов
class Body
{
private:
    int id;
    string type; // Тип кузова (например, "седан", "хэтчбек")
    int doors; // Количество дверей
    string color; // Цвет кузова (например, "Синий")
    string material; // Материал кузова (например, "Металл", "Нержавейка")
public:
    static int count; // Каждый раз id увеличивает на единицу
    Body() : id(0) {};
    Body(string typeName, int doors, string color, string material);

    // Ввод кузова
    static Body InputBody();
    // Вывод кузова
    void PrintBody();
};

