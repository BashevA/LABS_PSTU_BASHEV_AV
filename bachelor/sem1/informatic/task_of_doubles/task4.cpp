
// Поиск максимального и минимального элементов в двумерном массиве  

#include <iostream>
using namespace std;

int main() 
{
    int a[][3]=
    {
        {1,43452,3},
        {-4,25,6},
        {7,8,1239}
    };
    int rows = sizeof(a) / sizeof(a[0]);
    int cols = sizeof(a[0]) / sizeof(a[0][0]);
    int max = a[0][0];
    int max_index_row = 0;
    int max_index_col = 0;
    int min = a[0][0];
    int min_index_row = 0;
    int min_index_col = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                max_index_row = i;
                max_index_col = j;
            }
            else if (a[i][j] < min)
            {
                min = a[i][j];
                min_index_row = i;
                min_index_col = j;
            }
        }
    }

    cout << "Максимальный элемент: " << max << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Номер строки и столбца максимального элемента: " << max_index_row + 1 << ", " << max_index_col + 1 << endl;
    cout << "Номер строки и столбца минимального элемента: " << min_index_row + 1 << ", " << min_index_col + 1 << endl;

    return 0;
}