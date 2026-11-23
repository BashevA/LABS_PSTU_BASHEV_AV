// Числа Фибоначчи

#include <iostream>
using namespace std;


void fibFunc(int limit, int a = 0, int b = 1)
{   
    if(a > limit) return;
    cout << a << " ";
    fibFunc(limit, b, a + b);
}




int main()
{
    fibFunc(1);

    return 0;
}