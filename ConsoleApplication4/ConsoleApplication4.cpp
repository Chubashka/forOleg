#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int answer;
	char c;
	double a, b;
	do
	{
		system("cls");
		cout << "Введите первое число: " << endl;
		cin >> a;
		cout << "Введите второе число: " << endl;
		cin >> b;
		cout << "Веберите действие 1(+), 2(-), 3(*), 4(/): " << endl;
		do
		{
			cin >> answer;
			switch (answer)
			{
			case 1:
				cout << a << "+" << b << "=" << a + b << endl;
				break;
			case 2:
				cout << a << "-" << b << "=" << a - b << endl;
				break;
			case 3:
				cout << a << "*" << b << "=" << a * b << endl;
				break;
			case 4:
				cout << a << "/" << b << "=" << a / b << endl;
				break;
			default:
				cout << "Веберите действие 1(+), 2(-), 3(*), 4(/): " << endl;
				break;
			}
		} while (answer < 1 || answer > 4);
		cout << "Хотите еще раз запустить программу? (y-да)" << endl;
		cin >> c;
	} while (c == 'y');
	system("pause");
}