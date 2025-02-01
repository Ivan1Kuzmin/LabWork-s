package classes;
import java.util.Scanner;

// Кузов
public class Body {
    
    int id;
    String type; // Тип кузова (например, "седан", "хэтчбек")
    int doors; // Количество дверей
    String color; // Цвет кузова (например, "Синий")
    String material; // Материал кузова (например, "Металл", "Нержавейка")

    static int count = 0; // Каждый раз увеличивает id на единицу

    public Body(){ this.id = 0;}
    public Body(String typeName, int doors, String color, String material)
    {
        this.id = ++count;
        this.doors = doors;
        this.type = typeName;
        this.color = color;
        this.material = material;
    }

    // Ввод кузова
    static public Body InputBody()
    {
        String type;
        String color;
        String material;

        Scanner in = new Scanner(System.in, "Cp866");  

        System.out.print("Тип кузова:\t");  
        type = in.nextLine();

        System.out.print("Количество дверей:\t");
        int doors = Integer.parseInt(in.nextLine());

        System.out.print("Цвет кузова:\t");  
        color = in.nextLine();
        
        System.out.print("Материал кузова:\t");  
        material = in.nextLine();

        
        Body body = new Body(type, doors, color, material);
        return body;
    }

    // Вывод кузова
    public String toString()
    {
        String result = "\nТип кузова: " + this.type
                        + "\nКоличество дверей: " + this.doors
                        + "\nЦвет кузова: " + this.color
                        + "\nМатериал кузова: " + this.material;

        
        return result;
    }

    // Возвращает количество колес легковой машины
    public int GetWheelsNumber()
    {
        return 4;
    }

}
