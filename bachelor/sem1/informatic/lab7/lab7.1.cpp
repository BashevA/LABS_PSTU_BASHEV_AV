#include <iostream>
using namespace std;

void multNumbers(double a, double b)
{
    double product = 0;
    product = a * b;
    cout << product;
}

void multNumbers(double a, double b, double c, double d)
{
    double Re = 0;
    double Im = 0;
    Re = a * c - b * d;
    Im = a * d + b * c;
    cout << "Результат: " << Re << (Im >= 0 ? "+" : "-") << (Im >= 0 ? Im : -Im) << "i";
}


int main()
{
    multNumbers(8, 8.5);
    multNumbers(2,3,4,-9);
}
