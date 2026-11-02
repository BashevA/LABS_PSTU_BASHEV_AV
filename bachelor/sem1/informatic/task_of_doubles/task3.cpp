
// Сумма элементов строки двумерного массива

#include <iostream>
#include <iomanip>
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
    int matrix_sum = 0;

    for(int i = 0; i < rows; i++)
    {
        int sum = 0;
        for(int j = 0; j < cols; j++)
        {
            cout << setw(6) << a[i][j];
            sum += a[i][j];
            matrix_sum += sum;
        }
        cout << " | Сумма строки равна: " << i + 1 << ": " << sum << endl;
    }
    cout << "Сумма всех элементов матрицы: " << matrix_sum << endl;
    return 0;
}