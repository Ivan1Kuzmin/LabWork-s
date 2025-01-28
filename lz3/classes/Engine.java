package classes;
import java.util.Scanner;


// Двигатель
public class Engine
{
    int id;  // Идентификатор
    char[] model; // Название модели двигателя
    int typeId; // Тип двигателя (1-бензиновый, 2-дизельный)
    int horsePowers; // Мощность в лошадиных силах
    int valueCylindres; // Количество цилиндров

    static int count = 0; // Каждый раз увеличивает id на единицу
    
    public Engine(){ this.id = 0;}
    public Engine(char[] model, int typeId, int horsePowers, int valueCylindres)
    {
        this.model = new char[32];
        this.id = ++count;
        this.model = model;
        this.typeId = typeId;
        this.horsePowers = horsePowers;
        this.valueCylindres = valueCylindres;
    }

    public Engine InputEngine()
    {
        char[] myModel = new char[32];
        int type;

        Scanner in = new Scanner(System.in, "Cp866");  
        System.out.print("Введите название модели двигателя:\t");  
        myModel = in.nextLine().toCharArray(); 
        
        do
        {
            System.out.print("Введите тип двигателя: 1-бензиновый, 2-дизельный:\t");
            type = in.nextInt();
        }while (type != 1 && type != 2);

        System.out.print("Введите мощность в лошадинах силах:\t");
        int powers = in.nextInt();
        
        System.out.print("Введите количество цилиндров:\t");
        int cylindres = in.nextInt();
        // in.close();

        Engine engine = new Engine(myModel, type, powers, cylindres);
        return engine;
    }

    public void PrintEngine()
    {

        System.out.print("\nМодель: ");
        System.out.print(this.model);

        System.out.print("\nТип двигателя: ");
        if(this.typeId == 1)
        {
            System.out.print("бензиновый");
        }
        else
        {
            System.out.print("дизельный");
        }
        System.out.printf("\nМощность: %d", this.horsePowers);

        System.out.printf("\nКоличество цилиндров: %d", this.valueCylindres);
        // System.out.println();

        // in.close();
    }

    public int GetHorsePowers()
    {
        return this.horsePowers;
    }
};

