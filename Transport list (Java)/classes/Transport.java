package classes;

// Класс "Транспорт"
public abstract class Transport
{
    protected int speed; // Скорость
	protected int passengersNumber; // Количество пассажиров
	protected float fuelLevel; // Уровень топлива
    protected int id;
    protected Model model;
    protected Engine engine;
    protected Transmission transmission;
    protected Body body;

	public Transport() {};
	public Transport(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel)
    {
        this.model = model;
        this.engine = engine;
        this.transmission = transmission;
        this.body = body;
        this.speed = speed;
        this.passengersNumber = passengers;
        this.fuelLevel = fuel;
    }

    public Transport(Transport transport)
    {
        this.model = transport.model;
        this.engine = transport.engine;
        this.transmission = transport.transmission;
        this.body = transport.body;
        this.speed = transport.speed;
        this.passengersNumber = transport.passengersNumber;
        this.fuelLevel = transport.fuelLevel;
    }
	
	// Получить максимальное количество пассажиров
	public int GetMaxPassengers()
	{ 
		return this.passengersNumber; 
	};

    public int GetMaxSpeed()
    {
        return this.speed;
    };

    // Получить максимальный уровень топлива
	public float GetMaxFuelLevel() 
    {
         return this.fuelLevel;
    }; 

    // Получение двигателя (Нужно для прикладной функции)
    public Engine GetEngine()
    {
        return this.engine;
    }

    // Получение коробки передач (Нужно для прикладной функции)
    public Transmission GetTransmission()
    {
        return this.transmission;
    }

    // Получение модели (Нужно для прикладной функции)
    public Model GetModel()
    {
        return this.model;
    }

    // Получение кузова (нужно, чтобы через класс body получить количество колес)
    public Body GetBody()
    {
        return this.body;
    }

    public void Print()
    {
        System.out.print(this.model.toString());
        System.out.print(this.engine.toString());
        System.out.print(this.transmission.toString());
        System.out.print(this.body.toString());
        System.out.printf("\nМаксимальная скорость:\t%d", this.speed);
        System.out.printf("\nПассажировместимость:\t%d", this.passengersNumber);
        System.out.printf("\nОбъем бака:\t%.2f", this.fuelLevel);    
    }
};