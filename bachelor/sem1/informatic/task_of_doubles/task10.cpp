// 1 и 0 на главной и побочной диоганали
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int row = 4; 
    const int col = 4;
    int array[row][col] = {
        {10,20,30,10},
        {40,50,60,10},
        {70,80,90,10},
        {70,80,90,10}
    };

    for(int i = 0; i < row; i++)
    {
        int j = i;
        array[i][j] = 0;
        j = col - i - 1;
        array[i][j] = 0;
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout <<  setw(3) << array[i][j];
        }
        cout << endl;
    }
}