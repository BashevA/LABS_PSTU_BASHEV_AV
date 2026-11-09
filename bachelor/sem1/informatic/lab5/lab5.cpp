#include <iostream>
#include <math.h>

using namespace std;

double scalar(double row1[], double row2[], int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + row1[i] * row2[i];
    }
    return sum;
}


int main()
{

    double arr[][3] = {
        {0.0, 1.0, 0.0},
        {-1.0, 0.5, 0.0},
        {0.0, 0.0, 1.0}
    };

    int size = sizeof(arr[0]) / sizeof(arr[0][0]);
    bool result = true;

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            double s = scalar(arr[i], arr[j], size);
            
            if(i == j)
            {
                if(s != 1.0)
                {
                    result = false;
                }
            }
            else
            {
                if(s != 0.0)
                {
                    result = false;
                }
            }
        }
    }

    if(result == true)
    {
        cout << "Матрица является ортонормированной" << endl;
    }
    else
    {
        cout << "Матрица не является ортонормированной" << endl;
    }

    return 0;
}