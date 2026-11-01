#include <iostream>
using namespace std;

enum { q1, q2, qZ };                // q1 - искать '+', q2 - дойти до конца, qZ - выход

int main() {
    char tape[] = {'_', '1', '1', '1', '+', '1', '1', '1', '1'};   // 3 + 2
    int size = sizeof(tape) / sizeof(tape[0]);                   // длина ленты
    int head = 1;                   // головка (на первой единице)
    int condition = q1;             // начальное состояние

    while (condition != qZ) {       // выходим, когда перешли в qZ
        switch (condition) {

            case q1:                // идём вправо до '+'
                if (tape[head] == '+') {
                    tape[head] = '1';       // заменяем '+' на '1'
                    head++;
                    condition = q2;
                }
                else {
                    head++;
                }
                break;

            case q2:                // идём вправо до конца
                if (tape[head] == '1') {
                    head++;
                }
                else {              
                    head--;                
                    tape[head] = '_';       
                    condition = qZ;
                }
                break;
        }
    }

    for (int i = 0; i < size; i++)
        cout << tape[i];
    cout << "\n";                   

    return 0;
}
