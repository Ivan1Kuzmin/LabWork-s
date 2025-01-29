import java.io.IOException;
import java.io.PrintStream;
import java.util.Scanner;
import classes.*;


public class App 
{

    // ПРИКЛАДНЫЕ ФУНКЦИИ

    // Получение автомобиля с самой высокой мощностью двигателя
    static Car GetMaxPowerCar(Car[] cars, int count)
    {
        Car car = cars[0];

        for (int i = 1; i < count; i++)
        {        
            if (car.GetEngine().GetHorsePowers() < cars[i].GetEngine().GetHorsePowers())
            {
                car = cars[i];
            }
        }

        return car;
    }

    // Вывод автомобилей с определённой коробкой передач
    static void PrintCarByTransmission(Car[] cars, int count, int type)
    {
            // Scanner in = new Scanner(System.in);

            System.out.print("\n\nТип коробки:\t");
            if(type == 1)
            {
                System.out.print("механическая\n");
            }
            else
            {
                System.out.print("автоматическая\n");
            }

        for (int i = 0; i < count; i++)
        {
            
            if (cars[i].GetTransmission().GetTypeId() == type)
            {
                System.out.print(cars[i].GetModel().GetBrand());
                System.out.print(" ");
                System.out.print(cars[i].GetModel().GetModel());
                System.out.println();
            }
        }
    }

    void PrintCars(Car[] cars, int count)
    {   
        // Scanner in = new Scanner(System.in);

        for (int i = 1; i < count; i++)
        {
            cars[i].PrintCar();
            System.out.println();
        }
    }


    
    public static void main(String[] args) 
    {

        Scanner in = new Scanner(System.in, "Cp866");  
        System.out.print("\nВведите количество машин:\t");
        int carCount = in.nextInt();

        Car[] cars = new Car[carCount];
        for(int i = 0; i < carCount; i++)
        {
            cars[i] = new Car();
            cars[i]= Car.InputCar();
            System.out.println();
        }

        System.out.println();

        Car maxPowerCar = new Car();
        maxPowerCar = GetMaxPowerCar(cars, carCount);
        System.out.print("\n\nСамая мощная машина:\n");
        maxPowerCar.PrintCar();

        PrintCarByTransmission(cars, carCount, 1);    

        int wheelNumber = maxPowerCar.GetBody().GetWheelsNumber();
        System.out.printf("Количество колес: %d", wheelNumber);

        in.close();
    }
}

