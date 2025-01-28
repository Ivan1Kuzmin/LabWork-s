package classes;
import java.util.Scanner;

// Кузов
public class Body {
    
    int id;
    char[] type; // Тип кузова (например, "седан", "хэтчбек")
    int doors; // Количество дверей
    char[] color; // Цвет кузова (например, "Синий")
    char[] material; // Материал кузова (например, "Металл", "Нержавейка")

    static int count = 0; // Каждый раз увеличивает id на единицу

    public Body(){ this.id = 0;}
    public Body(char[] typeName, int doors, char[] color, char[] material)
    {
        this.type = new char[48];
        this.color = new char[64];
        this.material = new char[64];

        this.id = ++count;
        this.doors = doors;
        this.type = typeName;
        this.color = color;
        this.material = material;
    }

    // Ввод кузова
    public Body InputBody()
    {
        char[] type = new char[48];
        char[] color = new char[64];
        char[] material = new char[64];

        Scanner in = new Scanner(System.in, "Cp866");  

        System.out.print("Тип кузова:\t");  
        type = in.nextLine().toCharArray(); 

        System.out.print("Количество дверей:\t");
        int doors = Integer.parseInt(in.nextLine());

        System.out.print("Цвет кузова:\t");  
        color = in.nextLine().toCharArray(); 
        
        System.out.print("Материал кузова:\t");  
        material = in.nextLine().toCharArray(); 


    
        Body body = new Body(type, doors, color, material);
        return body;
    }

    // Вывод кузова
    public void PrintBody()
    {
        // Scanner in = new Scanner(System.in, "Cp866");

        System.out.print("\nТип кузова: ");
        System.out.print(this.type);

        System.out.printf("\nКоличество дверей: %d", this.doors);

        System.out.print("\nЦвет кузова: ");
        System.out.print(this.color);

        System.out.print("\nМатериал кузова: ");
        System.out.print(this.material);
        // System.out.println();

        // in.close();
    }

}
