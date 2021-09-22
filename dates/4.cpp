
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int month;
	cout << "Введите номер месяца: ";
	cin >> month;
	switch (month)
	{
	case 1 - 2, 12:
		cout << "Зима" << endl;
		break;
	case 3 - 5:
		cout << "Весна|" << endl;
		break;
	case 6 - 8:
		cout << "Лето" << endl;
		break;
	case 9 - 11:
		cout << "Осень" << endl;
		break;
	default:
		cout << "Ты пытаешься меня обмануть, со мной такое не пройдет!!!" << endl;
	}
	return 0;
}

	
