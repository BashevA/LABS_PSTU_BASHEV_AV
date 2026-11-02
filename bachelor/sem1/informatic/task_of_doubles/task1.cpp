
// Нахождение минимального и максимального элементов в массиве их индексов и количества повторений

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,-1,4,6,6};
    int size = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    int min = a[0];
    int count_min = 0;
    int count_max = 0;
    int index_min = 0;
    int index_max = 0;

    for(int i = 0; i < size; i++)
    {
        if(a[i] > max)
        {

            max = a[i];
            index_max = i;
            count_max = 1;
        }
        else if(a[i] < min)
        {
            min = a[i];
            index_min = i;
            count_min = 1;
        }
        else if(a[i] == max)
        {
            count_max += 1;
        }
        else if(a[i] == min)
        {
            count_min += 1;
        }

    }
    cout << "Максимальное значение: " << max << endl;
    cout << "Минимальное значение: " << min << endl;
    cout << "Индекс 1 максимальноего: " << index_max << endl;
    cout << "Индекс 1 минимального: " << index_min << endl;
    cout << "Количество повторений максимального элемента: " << count_max << endl;
    cout << "Количество повторений минимального элемента: " << count_min << endl;

    return 0;
}