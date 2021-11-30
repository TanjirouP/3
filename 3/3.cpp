// 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float per1, per2, per3;
	int par1, par2;
	char opr;
	cout << "Калькулятор\n";
	cout << "\nВведите знак (+, -, *, /, %, s - кв. корень, c - кб. корень, p - возведение в степень) - ";
	cin >> opr;
	if (opr == '%')
	{
		cout << "Введите 1 число - ";
		cin >> par1;
		cout << "\nВведите 2 число - ";
		cin >> par2;
		per3 = par1 % par2;
		cout << "Ответ - " << per3;
	}
	else if (opr == 's')
	{
		cout << "Введите число - ";
		cin >> par1;
		per3 = sqrt(par1);
		cout << "Ответ - " << per3;
	}
	else if (opr == 'c')
	{
		cout << "Введите число - ";
		cin >> par1;
		per3 = cbrt(par1);
		cout << "Ответ - " << per3;
	}
	else if (opr == 'p')
	{
		cout << "Введите число - ";
		cin >> par1;
		cout << "Введите степень - ";
		cin >> par2;
		per3 = pow(par1, par2);
		cout << "Ответ - " << per3;
	}
	else
	{
		cout << "Введите 1 число - ";
		cin >> per1;
		cout << "\nВведите 2 число - ";
		cin >> per2;
		if (opr == '+')
		{
			system("cls");
			per3 = per1 + per2;
			cout << "Ответ - " << per3;
		}
		else if (opr == '-')
		{
			system("cls");
			per3 = per1 - per2;
			cout << "Ответ - " << per3;
		}
		else if (opr == '*')
		{
			system("cls");
			per3 = per1 * per2;
			cout << "Ответ - " << per3;
		}
		else if (opr == '/' && per1 != 0 && per2 != 0)
		{
			system("cls");
			per3 = per1 / per2;
			cout << "Ответ - " << per3;
		}
		else
		{
			system("cls");
			cout << "Ошибка";
		}
	}
	return 0;
}

