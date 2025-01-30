package classes;
import java.util.InputMismatchException;
import java.util.Scanner;


public class Check {
    public static int CheckNumber()
    {
        Scanner in = new Scanner(System.in, "Cp866");  
        while(true)
        {
            int number;
            try
            {
                number = Integer.parseInt(in.nextLine());
    
                // Проверка, что число положительное
                if(number <= 0)
                {
                    throw new IllegalArgumentException("\nЧисло должно быть положительным. Попробуйте снова.\n");
                }
                
                // Если все в порядке, выходим из цикла 
                return number;
            }

            catch(IllegalArgumentException e)
            {
                System.out.println("\nОшибка! " + e.getMessage());
            }
        }
    }
}