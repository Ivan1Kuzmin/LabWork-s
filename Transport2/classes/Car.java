package classes;

import java.util.Scanner;

public class Car extends Transport implements Cloneable
 {
    int id;
    Model model;
    Engine engine;
    Transmission transmission;
    Body body;

    static int count; // Каждый раз увеличивает id на единицу

    public Car(){this.id = 0;};
    public Car(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel)
{

    super(speed, passengers, fuel);

    this.id = ++count;
    this.model = model;
    this.engine = engine;
    this.transmission = transmission;
    this.body = body;
}

    // Ввод машины
    static public Car InputCar()
    {
        Model model = new Model();
        model =  Model.InputModel();

        Engine engine = new Engine();
        engine = Engine.InputEngine();

        Transmission transmission = new Transmission();
        transmission = Transmission.InputTransmission();

        Body body = new Body();
        body = Body.InputBody();


        Scanner in = new Scanner(System.in, "Cp866");  
        
        System.out.print("Введите максимальную скорость машины:\t");
        int speed = in.nextInt();
    
        System.out.print("Введите пассажировместимость:\t");
        int passengers = in.nextInt();
    
        System.out.print("Введите объём бака:\t");
        float fuel = in.nextFloat();
    
            
        Car car = new Car(model, engine, transmission, body, speed, passengers, fuel);
        return car;
    }

    // Вывод машина
    public String toString()
    {
        String result = this.model.toString();
        result += this.engine.toString();
        result += this.transmission.toString();
        result += this.body.toString();
        
        return result;
    }

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

    @Override
    public void Move()
    {
        System.out.println("\n*Машина едет*\n");
    }
    
    @Override
    public int GetSpeed()
    {
        return this.speed;
    }

    @Override
    public int GetMaxPassengers()
    {
        return super.GetMaxPassengers();
      
    }

    @Override
    public float GetMaxFuelLevel()
    {   
        return super.GetMaxFuelLevel();
    }

    
    public Object clone1()
    {
        Car car = new Car(this.model, this.engine, this.transmission, this.body, this.speed, this.passengersNumber, this.fuelLevel);
        return car;
    }

    
    public Car clone2() throws CloneNotSupportedException
    {
        return (Car) super.clone();
    }
}
