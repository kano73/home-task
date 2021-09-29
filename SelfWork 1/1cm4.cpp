#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int bL, bW, bH, hL, hH;
    cout << "введите длину параллелепипеда";
    cin >> bL;
    cout << "введите ширину параллелепипеда";
    cin >> bW;
    cout << "введите высоту параллелепипеда";
    cin >> bH;
    cout << "введите длину отверстия";
    cin >> hL;
    cout << "введите высоту отверстия";
    cin >> hH;
    if ((bL <= hL || bW <= hL) & bH <= hH)
    {
        cout << "параллелепипед проходит в отверсие" << endl;
    }
    else
    {
        cout << "Параллелепипед не проходит в отверсие" << endl;
    }
    system("pause");
    return 0;
}