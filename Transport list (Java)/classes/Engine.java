package classes;
import java.util.Scanner;


// Двигатель
public class Engine
{
    int id;  // Идентификатор
    String model; // Название модели двигателя
    int typeId; // Тип двигателя (1-бензиновый, 2-дизельный)
    int horsePowers; // Мощность в лошадиных силах
    int valueCylindres; // Количество цилиндров

    static int count = 0; // Каждый раз увеличивает id на единицу
    
    public Engine(){ this.id = 0;}
    public Engine(String model, int typeId, int horsePowers, int valueCylindres)
    {
        this.id = ++count;
        this.model = model;
        this.typeId = typeId;
        this.horsePowers = horsePowers;
        this.valueCylindres = valueCylindres;
    }

    static public Engine InputEngine()
    {
        String myModel;
        int type;

        Scanner in = new Scanner(System.in, "Cp866");  
        System.out.print("Введите название модели двигателя:\t");  
        myModel = in.nextLine();
        
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

    public String toString()
    {
        String result = "\nМодель: " + this.model;
        

        result += "\nТип двигателя: ";
        if(this.typeId == 1)
        {
            result += "бензиновый";
        }
        else
        {
            result += "дизельный";
        }
        result += "\nМощность: " + this.horsePowers;

        result += "\nКоличество цилиндров: " + this.valueCylindres;
       
        return result;
    }

    public int GetHorsePowers()
    {
        return this.horsePowers;
    }
};

