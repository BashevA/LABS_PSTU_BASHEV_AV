
// Сортировка массива методом "Выбора"

#include <iostream>
using namespace std;

int main()
{
    int a[] ={3,3,2,1,1,9};
    int number = 0;
    int size = sizeof(a)/ sizeof(a[0]);
    
    for(int i = 0; i < size; i++)
    {
        int min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(a[j] <= a[min])
            {
                min = j;
            }
            
        }
        number = a[i];
        a[i] = a[min];
        a[min] = number;

    }
    for(int i = 0; i < size; i++)
    {
        cout << a[i];
    }
}