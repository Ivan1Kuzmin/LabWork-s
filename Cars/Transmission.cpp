#include "Transmission.h"

Transmission::Transmission(int typeId, int gears)
{
    this->id = ++Transmission::count;
    this->typeId = typeId;
    this->gears = gears;
}

Transmission Transmission::InputTransmission()
{
    int typeId;
    int gears;

    do
    {
        cout << "��� ������� (1-������������, 2-��������������):\t";
        cin >> typeId;
    } while (typeId != 1 && typeId != 2);


    cout << "���������� �������:\t";
    cin >> gears;

    Transmission transmission(typeId, gears);
    return transmission;
}

void Transmission::PrintTransmission()
{
    cout << "��� �������:\t";
    if (this->typeId == 1)
    {
        cout << "������������\n";
    }
    else
    {
        cout << "��������������\n";
    }
    cout << "���������� �������:\t" << this->gears << "\n";
}

int Transmission::GetTypeId()
{
    return this->typeId;
}

Transmission& Transmission::operator ++()
{
    this->gears++;
    return *this;
}

Transmission Transmission::operator++ (int)
{
    Transmission copy{*this};
    ++(*this);
    return copy;
}

