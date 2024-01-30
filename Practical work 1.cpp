#include <iostream>
#include <cmath>

int main()
{
using namespace std;
setlocale(LC_ALL, "ru");
int operation, num1, num2;
do 
{
	cout << "Выберете математическую операцию: " << endl
		<< "1.Сложение " << endl
		<< "2.Вычитание " << endl
		<< "3.Умножение " << endl
		<< "4.Деление " << endl
		<< "5.Возведение в степень " << endl
		<< "6.Нахождение квадратного корня " << endl
		<< "7.Найти 1% от числа " << endl
		<< "8.Найти факториал числа " << endl
		<< "9.Выход из программы " << endl;
	    cin >> operation;

switch (operation)

	{
	
	case 1:

	{
		cout << "Введите первое число: " << endl;
		cin >> num1;
		cout << "Введите второе число: " << endl;
		cin >> num2;
		cout << "Сумма ваших чисел = " << num1 + num2 << endl;
		break;
	}
	case 2:
	
	{
		cout << "Введите первое число: " << endl;
		cin >> num1;
		cout << "Введите второе число: " << endl;
		cin >> num2;
		cout << "Разность ваших чисел: " << num1 - num2 << endl;
		break;
	}
	case 3: 
	
	{
		cout << "Введите первое число: " << endl;
		cin >> num1;
		cout << "Введите второе число: " << endl;
		cin >> num2;
		cout << "Произведение ваших чисел = " << num1 * num2 <<endl;
		break;
	}
	case 4:

	{
		cout << "Введите первое число: " << endl;
		cin >> num1;
		cout << "Введите второе число: " << endl;
		cin >> num2;
		cout << "Частное ваших чисел = " << (float)num1 / num2 << endl;
		break;
	}
	case 5:

	{
		cout << "Введите число которое хотите возвести в степень:\n " << endl;
		cin >> num1;
		cout << "В какую степень хотите возвести число?" << endl;
		cin >> num2;
		cout << "Число " << num1 << " в степени " << num2 << " = " << pow(num1, num2) << endl;
		break;
	}
	case 6:
	
	{
		cout << "Введите число квадратный корень которого хотите найти:\n " << endl;
		cin >> num1;
		cout << "Квадратный корень числа " << num1 << " = " << sqrt(num1) << endl;
		break;
	}
	case 7:
	
	{
		cout << "Введите число 1% от числа которого хотите найти: " << endl;
		cin >> num1;
		cout << "1% числа " << num1 << " = " << (num1 / 100) * 1 << endl;
		break;
	}
	case 8:

	{

		cout << "Введите число факториал которого хотите найти: " << endl;
		cin >> num1;
		for (int i = 1,  num2 = 1; i <= num1; i++)
		{
			num2 = num2 * i;
		}
		cout << "Факториал числа " << num1 << " = " << num2 << endl;
		break;

	}
	case 9: 
	{
		return 0;
	}
	cout << "Хотите выполнить ещё операции? " << endl;
	cin >> operation;
	}

} while (operation != 9);
   
}

