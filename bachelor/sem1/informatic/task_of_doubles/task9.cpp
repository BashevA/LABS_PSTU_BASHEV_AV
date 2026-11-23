// Увеличение и уменьшение длины динамического массива

#include <iostream>
using namespace std;

void resizeArr(int*& arr, int& oldSize, int newSize)
{
    int* newArr = new int[newSize];
    for(int i = 0; i < newSize; i++)
    {
        newArr[i] = arr[i];
    }

    if(oldSize < newSize)
    {
        for(int i = oldSize; i < newSize; i++)
        {
            newArr[i] = 0;
        }
    }
    cout << "Новый массив: "; 
    for(int i = 0; i < newSize; i++)
    {

        cout <<  newArr[i] << " ";
    }

    delete [] arr;
    arr = newArr;
    oldSize = newSize;
}

int main()
{
    int size = 3;
    int* arr = new int[size]{10,20,30};
    resizeArr(arr, size, 1);
}
