#include <iostream>
#include <math.h>
using namespace std;


int main() 
{

double a = 0;
int n = 1;
double sum = 0;
float epsilon = pow(10, -4);

do{
    a = pow(-1, n - 1) / pow(n,n);
    sum = sum + a;
    n = n + 1;
}while (fabs(a) >= epsilon);

cout << "Сумма ряда с точностью epsilon=10-4 по заданию варианта 5: " << sum << endl;

return 0;

}

