
// Сортировка массива методом "Пузырька"

#include <iostream>
using namespace std;

int main() 
{    
    int a[] = {1,2,3,4,5,7,4,5,3,1};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}