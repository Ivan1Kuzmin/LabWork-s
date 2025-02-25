#include "CheckNumbers.h"
#include <iostream>
using namespace std;

// ���������� ���������� �� ���� �������������� �����
int InputCorrectNumber()
{
	// ���� �����
	int number;

	while (true)
	{
		try
		{
			cin >> number;

			// ���������, ���� �� ������������ ������ ������ �����,
			// ���� ���� �� ������ ����� ������, �� cin.fail() ������ true. 
			// � ���� ������ �� ���������� ����
			if (cin.fail())
			{
				// ���������� ��������� ������ 
				cin.clear();
				// ���������� �������� ���� 
				cin.ignore(numeric_limits<streamsize>::max(), '\n');

				throw invalid_argument("������� �� ����� �����. ���������� �����.");
			}

			// ���������, ��� ����� �������������
			if (number <= 0)
			{
				throw invalid_argument("������. ����� ������ ���� �������������. ���������� �����.\n");
			}

			// ���� ��� � �������, ������� �� �����
			break;
		}
		catch (const invalid_argument& e)
		{
			cerr << "������: " << e.what() << endl;
		}
	}
	return number;
}