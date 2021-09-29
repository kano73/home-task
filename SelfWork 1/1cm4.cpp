#include <iostream>
using namespace std;

int main()
{
    double dLB, dWB, dHB;   
    double dW, dH;         
    setlocale(LC_ALL, "RUS");
    

    cout << "Введите длинну параллелепипед ";
    cin >> dLB;
    cout << "Введите ширину параллелепипед ";
    cin >> dWB;
    cout << "Введите высоту параллелепипед ";
    cin >> dHB;

    cout << "Введите ширина отверстия: ";
    cin >> dW;
    cout << "Введите высоту отверстия: ";
    cin >> dH;

    if (dWB <= dW && dHB <= dH)
    {
        cout << "параллелепипед войдёт в отверстие 1-й стороной" << endl;
    }
    else if (dLB <= dW && dHB <= dH)
    {
        cout << "параллелепипед войдёт в отверстие 2-й стороной" << endl;
    }
    else if (dLB <= dW && dWB <= dH)
    {
        cout << "параллелепипед войдёт в отверстие 3-й стороной" << endl;
    }
    else
    {
        cout << "параллелепипед не пройдёт" << endl;
    }

    return 0;

}