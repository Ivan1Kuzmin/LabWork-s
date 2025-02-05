package classes;
import java.util.Scanner;

public class Moto extends Transport
{
    static int count; // Каждый раз увеличивает id на единицу

    public Moto(){this.id = 0;};
    public Moto(Model model, Engine engine, Transmission transmission, Body body, int speed, int passengers, float fuel)
    {
        super(model, engine, transmission, body, speed, passengers, fuel);
        this.id = ++count;
    }

    public Moto(Moto moto)
    {
        super(moto.model, moto.engine, moto.transmission, moto.body, moto.speed, moto.passengersNumber, moto.fuelLevel);
        this.id = ++count;
    }

    // Ввод машины
    static public Moto InputMoto()
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
        
        System.out.print("Введите максимальную скорость:\t");
        int speed = in.nextInt();
    
        System.out.print("Введите пассажировместимость:\t");
        int passengers = in.nextInt();
    
        System.out.print("Введите объём бака:\t");
        float fuel = in.nextFloat();
    
            
        Moto moto = new Moto(model, engine, transmission, body, speed, passengers, fuel);
        return moto;
    }

    
// string Moto::WhatTransport()
// {
//     return "\nМотоцикл.\n";
// }
}
