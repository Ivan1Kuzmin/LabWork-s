package classes;
import java.util.Scanner;

public class Car extends Transport
 {
    static int count; // Каждый раз увеличивает id на единицу

    public Car(){this.id = 0;};
    public Car(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel)
    {
        super(model, engine, transmission, body, speed, passengers, fuel);
        this.id = ++count;
    }

    public Car(Car car)
    {
        super(car.model, car.engine, car.transmission, car.body, car.speed, car.passengersNumber, car.fuelLevel);
        this.id = ++count;
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

    // string Car::WhatTransport()
    // {
    //     return "\nАвтомобиль.\n";
    // }

}
