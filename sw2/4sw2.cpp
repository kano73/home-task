﻿// 4sw2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std; 

int main()
{
    const int SIZE = 21;

    int a[SIZE], min, max;

    min = -10;

    max = 10;

    srand(time(0));

    for (int i = 0; i < SIZE; i++)

    {

        a[i] = rand() % (max - min + 1) + min;

        cout << a[i] << " ";

    }

    cout << endl;




    for (int i = 0; i < SIZE; i++)

    {

        bool banner = true;

        for (int j = 0; j < SIZE; j++)

        {

            if (i - j != 0 && a[i] == a[j])

            {

                banner = false;

            }

        }

        if (banner)

        {

            cout << a[i] << " ";

        }

    }

    cout << endl;

    //если я правильно понял, что медиана массива - это символ посередине массива

    cout << "Медиана массива -  " << a[SIZE / 2] << endl;




    system("pause");

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.