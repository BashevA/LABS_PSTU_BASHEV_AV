#include <iostream>
using namespace std;

double multNumbers(double a, double b)
{
    double product = 0;
    product = a * b;
    return product;
}

void multNumbers(double a, double b, double c, double d)
{
    int Re = 0;
    int Im = 0;
    Re = a * c - b * d;
    Im = a * d + b * c;
    cout << "Результат: " << Re << (Im >= 0 ? "+" : "-") << (Im >= 0 ? Im : -Im) << "i";
}


int main()
{
    cout << multNumbers(8, 8.5) << endl;
    multNumbers(2,3,4,-9);
}