#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float aF = 1000;
    float bF = 0.0001;

    float numerator = pow(aF - bF,3) - (pow(aF,3) - 3 * pow(aF,2) * bF); 
    float denominator = pow(bF,3) - 3 * aF* pow(bF,2);
    float result = numerator / denominator;

    cout << "Результат вычисления с типом данных float равен: " << result << endl;


    double aD = 1000;
    double bD = 0.0001;

    double numeratorDouble = pow(aD - bD,3) - (pow(aD,3) - 3 * pow(aD,2) * bD);
    double denominatorDouble = pow(bD,3) - 3 * aD* pow(bD,2);
    double resultDouble = numeratorDouble / denominatorDouble;

    cout << "Результат вычисления с типом данных double равен: " << resultDouble;

    return 0;
}





