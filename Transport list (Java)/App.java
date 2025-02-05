import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
// import java.unit.Collections;
import java.util.Scanner;
import classes.*;


public class App 
{

    // ПРИКЛАДНЫЕ ФУНКЦИИ

    // Алгоритм поиска
    static public Transport SpeedestTransport(List<Transport> transports)
    {
        Transport speedest = transports.get(0);
       for(Transport transport : transports)
       {
            if(speedest.GetMaxSpeed() < transport.GetMaxSpeed())
            {
                speedest = transport;
            }
       }

       System.out.println("Самая быстрый транспорт:");
       speedest.Print();
        return speedest;
    }


    
    
    public static void main(String[] args) 
    {

        List<Transport> transports = new ArrayList<Transport>();
        
        System.out.println("Введите параметры машины:\n");
        Car car1 = Car.InputCar();

        System.out.println("\nВведите параметры машины:");
        Car car2 = Car.InputCar();

        System.out.println("\n\nВведите параметры мотоцикла:\n");
        Moto moto = Moto.InputMoto();

        transports.add(new Car(car1));
        transports.add(new Car(car2));
        transports.add(new Moto(moto));

        System.out.println("Самый быстрый транспорт\n");
        // Самый быстрый транспорт
        SpeedestTransport(transports);

        System.out.println("\n\nОтсортированный список:\n");

        // Алгоритм сортировки по скорости по возрастанию
        Collections.sort(transports, new Comparator <Transport>()
        {
            @Override
            public int compare(Transport t1, Transport t2)
            {
                return Integer.compare(t1.GetMaxSpeed(), t2.GetMaxSpeed());
            }
        });

        for(Transport transport : transports)
        {
            transport.Print();
            System.out.println();
        }

    }
}

