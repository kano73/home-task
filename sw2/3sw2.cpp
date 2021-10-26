﻿// 3sw2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int i, j, row1, columns1, a[20][20], min, max;

    srand(time(0));

    min = -10;

    max = 10;




    cout << "Введите количество строк первой матрицы  ";

    cin >> row1;




    cout << "Введите количество стобцов первой матрицы  ";

    cin >> columns1;




    for (int i = 0; i < row1; i++)

    {

        for (int j = 0; j < columns1; j++)

        {

            a[i][j] = rand() % (max - min + 1) + min;

            if (a[i][j] < 0)

                cout << a[i][j] << "      ";

            else

                cout << a[i][j] << "       ";

        }

        cout << endl;

    }







    int row2, columns2, b[20][20];




    cout << "Введите количество строк второй матрицы  ";

    cin >> row2;




    cout << "Введите количество стобцов второй матрицы  ";

    cin >> columns2;




    for (int i = 0; i < row2; i++)

    {

        for (int j = 0; j < columns2; j++)

        {

            b[i][j] = rand() % (max - min + 1) + min;

            if (b[i][j] < 0)

                cout << b[i][j] << "      ";

            else

                cout << b[i][j] << "       ";

        }

        cout << endl;

    }

    int c[i][j];

    if (columns1 != row2) cout << "К сожалению, матрицы нельзя перемножить" << endl;

    else

    {

        cout << "Матрица произведения -  " << endl;




        c[i][j] = 0;

        for (int i = 0; i < row1; i++)

        {

            for (int j = 0; j < columns2; j++)

            {

                for (int k = 0; k < columns1; k++)

                {

                    c[i][j] += a[i][k] * b[k][j];

                }

            }

        }




        for (int i = 0; i < row2; i++)

        {

            for (int j = 0; j < columns1; j++)

            {

                cout << c[i][j] << "      ";

            }

            cout << endl;

        }

    }

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
