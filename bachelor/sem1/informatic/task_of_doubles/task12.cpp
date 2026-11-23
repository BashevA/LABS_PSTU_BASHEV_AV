// Создать программу для расчета заработной платы

#include <iostream>
#include <string>
using namespace std;

struct salary
{
    string FullName;
    int daysWorked;
    double DayCost;
    double bonus;
};


int main()
{
    salary s;
    cout << "Введите полное имя через _: ";
    cin >> s.FullName;
    cout << endl << "Введите количество отработанных дней: ";
    cin >> s.daysWorked;
    cout << endl << "Введите размер оплаты за день: ";
    cin >> s.DayCost;
    cout << endl << "Введите размер премии: ";
    cin >> s.bonus;

    int Sallary;
    Sallary = s.daysWorked * s.DayCost + s.bonus;
    cout << endl << "Итоговая зарплата для " << s.FullName << " составляет: " << Sallary;
}