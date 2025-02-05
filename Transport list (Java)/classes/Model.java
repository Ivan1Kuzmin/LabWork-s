package classes;
import java.util.Scanner;


// Модель автомобиля
public class Model {
    
    int id;
    String brand; // Марка (например, KIA)
    String model;  // Модель автомобиля 
    String country;   // Страна производитель   

    static int count = 0; // Каждый раз увеличивает id на единицу

    public Model(){ this.id = 0;}
    public Model(String brand, String model, String country)
    {
        this.id = ++count;
        this.brand = brand;
        this.model = model;
        this.country = country;
    }    

    // Ввод модели
    static public Model InputModel()
    {
        String brand;
        String model;
        String country;

        Scanner in = new Scanner(System.in, "Cp866");  
        System.out.print("Марка транспорта:\t");  
        brand = in.nextLine();

        System.out.print("Модель транспорта:\t");  
        model = in.nextLine();

        System.out.print("Страна производитель:\t");  
        country = in.nextLine();
    
        Model newModel = new Model(brand, model, country);
        return newModel;
    }

    // Вывод модели
    public String toString()
    {
        String result = "\nМарка: " + this.brand 
                        + "\nМодель: " + this.model
                        + "\nСтрана: " + this.country;
        
        return result;
    }

    // Получение марки (Нужно для прикладной функции)
    public String GetBrand()
    {
        return this.brand;
    }
    // Получение модели (Нужно для прикладной функции)
    public String GetModel()
    {
        return this.model;
    }
}
