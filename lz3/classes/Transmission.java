package classes;
import java.util.Scanner;


// Коробка передач
public class Transmission {
    int id;
    int typeId; // Тип коробки (1-Механическая, 2-Автоматическая)
    int gears; // Количество передач

    static int count = 0; // Каждый раз увеличивает id на единицу

    public Transmission(){this.id = 0;};

    public Transmission(int typeId, int gears)
    {
        this.id = ++count;
        this.typeId = typeId;
        this.gears = gears;
    }

    // Ввод коробки
    public Transmission InputTransmission()
    {
        Scanner in = new Scanner(System.in, "Cp866");  
        int type;
        do
        {
            System.out.print("Тип коробки (1-Механическая, 2-Автоматическая):\t");
            type = in.nextInt();
        } while (type != 1 && type != 2);

        System.out.print("Количество передач:\t");
        int gears = in.nextInt();
        // in.close();

        Transmission transmission = new Transmission(type, gears);
        return transmission;
    }

    // Вывод коробки передач на консоль
    public void PrintTransmission()
    {
        // Scanner in = new Scanner(System.in, "Cp866");

        System.out.print("\nТип коробки:\t");
        if(this.typeId == 1)
        {
            System.out.print("механическая");
        }
        else
        {
            System.out.print("автоматическая");
        }
        System.out.printf("\nКоличество передач:\t %d", this.gears);
        // System.out.println();

        // in.close();
    }

    // Получение типа коробки передачи (Нужно для прикладной функции)
    public int GetTypeId()
    {
        return this.typeId;
    }
}
