#ifndef MOTO
#define MOTO

#include "Transport.h"

class Moto : public Transport
{
    int id;
public:
    static int count; // ������ ��� id ����������� �� �������
    Moto() : id(0) {};
    Moto(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, int fuel)
        : Transport(model, engine, transmission, body, speed, passengers, fuel)
    {
        this->id = ++Moto::count;
        this->engine.SetType(1);
    };

    // ���� � �������
    static Moto InputMoto();


    void Move() override;
    string WhatTransport() override;
};

#endif