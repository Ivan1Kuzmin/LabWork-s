#pragma once
#include <string.h>
#include <iostream>
using namespace std;

// Кузов
class Body
{
private:
    int id;
    char type[48]; // Тип кузова (например, "седан", "хэтчбек")
    int doors; // Количество дверей
    char color[64]; // Цвет кузова (например, "Синий")
    char material[64]; // Материал кузова (например, "Металл", "Нержавейка")
public:
    static int count; // Каждый раз id увеличивает на единицу
    Body() : id(0) {};
    Body(char* typeName, int doors, char* color, char* material);

    // Ввод кузова
    Body InputBody();
    // Вывод кузова
    void PrintBody();
};

