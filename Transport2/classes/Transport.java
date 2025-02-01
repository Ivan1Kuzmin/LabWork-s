package classes;

// Абстрактный класс "Транспорт"
public abstract class Transport
{
    protected int speed; // Скорость
	protected int passengersNumber; // Количество пассажиров
	protected float fuelLevel; // Уровень топлива

	public Transport() {};
	public Transport(int speed, int passengers, float fuel) 
    {
        this.speed = speed;
        this.passengersNumber = passengers;
        this.fuelLevel = fuel;
    }

	public abstract void Move(); // Передвижение
	public abstract int GetSpeed(); // Получить среднюю скорость передвижения
	
	// Получить максимальное количество пассажиров
	public int GetMaxPassengers()
	{ 
		return this.passengersNumber; 
	};

    // Получить максимальный уровень топлива
	public float GetMaxFuelLevel() 
    {
         return this.fuelLevel;
    }; 
};