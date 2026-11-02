
// Проверка упорядоченности по возрастанию в массиве

#include <iostream>
using namespace std;

int main()
{
    int a[] = {2,1};
    bool flag = true;
    int size = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i <= size - 2 && flag; i++)
    {
        if(a[i] > a[i + 1])
        {
            flag = false;
        }
    }
    cout << boolalpha << flag;
    return 0;
}