#include <iostream>
#include <cstdarg>
using namespace std;

void sum(int k, ...)
{
    int sum = 0;
    va_list num;
    va_start(num, k);
    int a = va_arg(num, int);
    int sign = 1;
    for(int i = 1; i < k; i++)
    {
        int b = va_arg(num, int);
        sum += sign * a * b;
        sign *= -1;
        a = b;
    }
    va_end(num);
    cout << "Сумма функции для " << k << " чисел равна: " << sum << endl;
}

int main()
{
    sum(5,1,2,3,4,5);
    sum(10,1,2,3,4,5,6,7,8,9,10);
    sum(12,0,9,8,7,6,5,4,3,2,12,1,12);

}