
// Сортировка массива методом "Вставки"

#include <iostream>
using namespace std;

int main()
{
    int a[] = {5,4,3,2,8};
    int size = sizeof(a) / sizeof(a[0]);
    
    for(int i = 1; i < size; i++)
    {   
        int current_number = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > current_number)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current_number;
        for(int i = 0; i < size; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    for(int i = 0; i < size; i++)
    {
        cout << a[i];
    }

    return 0;
}
