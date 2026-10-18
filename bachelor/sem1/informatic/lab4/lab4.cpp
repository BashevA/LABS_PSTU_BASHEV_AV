#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    int max_len = 100;
    int arr[max_len];
    int newArrSize = 0;
    int newArr[max_len];
    int newNewArrSize = 0;
    int newNewArr[max_len];
    srand(time(0));


    // Генерация массива
    for(int i = 0; i < max_len; i++)
    {
        arr[i] = rand() % 100;
    }

    // Вывод массива
    cout << "Исходный массив: ";
    for(int i = 0; i < max_len; i++)
    {
        cout << arr[i] << " ";
    }

    // Массив кратных 7 и не равных 0
    for(int i = 0; i < max_len; i++)
    {
        if(arr[i] % 7 == 0 and arr[i]!= 0)
        {
            newArr[newArrSize] = arr[i];
            newArrSize++;
        }
    }

    // Массив четных с 0 после каждого
    for(int i = 0; i < newArrSize; i++)
    {
        if(newArr[i] % 2 == 0)
        {
            newNewArr[newNewArrSize] = newArr[i];
            newNewArr[newNewArrSize + 1] = 0;
            newNewArrSize += 2;
        }
    }

    
    cout << endl << "Новый массив: ";
    for(int i = 0; i < newNewArrSize; i++)
    {
        cout << newNewArr[i] << " ";
    }

    return 0;
}