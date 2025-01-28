package classes;

public class Car {
    int id;
    Model model;
    Engine engine;
    Transmission transmission;
    Body body;

    static int count; // Каждый раз увеличивает id на единицу

    public Car(){this.id = 0;};
    public Car(Model model, Engine engine, Transmission transmission, Body body)
    {
        this.id = ++count;
        this.model = model;
        this.engine = engine;
        this.transmission = transmission;
        this.body = body;
    }

    // Ввод машины
    public Car InputCar()
    {
        Model model = new Model();
        model = model.InputModel();

        Engine engine = new Engine();
        engine = engine.InputEngine();

        Transmission transmission = new Transmission();
        transmission = transmission.InputTransmission();

        Body body = new Body();
        body = body.InputBody();

        Car car = new Car(model, engine, transmission, body);
        return car;
    }

    // Вывод машина
    public void PrintCar()
    {
        this.model.PrintModel();
        this.engine.PrintEngine();
        this.transmission.PrintTransmission();
        this.body.PrintBody();
    }

    // Получение двигателя (Нужно для прикладной функции)
    public Engine GetEngine()
    {
        return this.engine;
    }

    // Получение коробки передач (Нужно для прикладной функции)
    public Transmission GetTransmission()
    {
        return this.transmission;
    }

    // Получение модели (Нужно для прикладной функции)
    public Model GetModel()
    {
        return this.model;
    }
}
