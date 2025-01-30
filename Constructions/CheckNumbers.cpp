#include "CheckNumbers.h"
#include <iostream>
using namespace std;

// Обработчик исключений на ввод положительного числа
int InputCorrectNumber()
{
	// Наше число
	int number;

	while (true)
	{
		try
		{
			cin >> number;

			// Проверяем, ввел ли пользователь символ вместо числа,
			// если ввод не являет целым числом, то cin.fail() вернет true. 
			// В этом случае мы игнорируем ввод
			if (cin.fail())
			{
				// Сбрасываем состояние потока 
				cin.clear();
				// Игнорируем неверный ввод 
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				throw invalid_argument("Введено не целое число. Попробуйте снова.");
			}

			// Проверяем, что число положительное
			if (number <= 0)
			{
				throw invalid_argument("Ошибка. Число должно быть положительным. Попробуйте снова.\n");
			}

			// Если все в порядке, выходим из цикла
			break;
		}
		catch (const invalid_argument& e)
		{
			cerr << "Ошибка: " << e.what() << endl;
		}
	}
	return number;
}