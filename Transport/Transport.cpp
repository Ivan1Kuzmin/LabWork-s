#include "Transport.h"

Transport& Transport::operator=(const Transport& other)
{
	if (this != &other)
	{
		this->fuelLevel = other.fuelLevel;
		this->passengersNumber = other.passengersNumber;
		this->speed = other.speed;
	}

	return *this;
}