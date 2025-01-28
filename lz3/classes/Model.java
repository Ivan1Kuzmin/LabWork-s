package classes;
import java.util.Scanner;


// Модель автомобиля
public class Model {
    
    int id;
    char[] brand; // Марка (например, KIA)
    char[] model;  // Модель автомобиля 
    char[] country;   // Страна производитель   

    static int count = 0; // Каждый раз увеличивает id на единицу

    public Model(){ this.id = 0;}
    public Model(char[] brand, char[] model, char[] country)
    {
        this.id = ++count;
        this.brand = new char[32];
        this.model = new char[32];
        this.country = new char[32];
        this.brand = brand;
        this.model = model;
        this.country = country;
    }    

    // Ввод модели
    public Model InputModel()
    {
        char[] brand = new char[32];
        char[] model = new char[32];
        char[] country = new char[32];

        Scanner in = new Scanner(System.in, "Cp866");  
        System.out.print("Марка автомобиля:\t");  
        brand = in.nextLine().toCharArray(); 

        System.out.print("Модель автомобиля:\t");  
        model = in.nextLine().toCharArray(); 

        System.out.print("Страна производитель:\t");  
        country = in.nextLine().toCharArray();
    
        Model newModel = new Model(brand, model, country);
        return newModel;
    }

    // Вывод модели
    public void PrintModel()
    {
        System.out.print("\nМарка автомобиля: ");
        System.out.print(this.brand);

        System.out.print("\nМодель автомобиля: ");
        System.out.print(this.model);

        System.out.print("\nСтрана производитель: ");
        System.out.print(this.country);
        // System.out.println();  
    }

    // Получение марки (Нужно для прикладной функции)
    public char[] GetBrand()
    {
        return this.brand;
    }
    // Получение модели (Нужно для прикладной функции)
    public char[] GetModel()
    {
        return this.model;
    }
}
