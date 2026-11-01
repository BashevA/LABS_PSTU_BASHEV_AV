#include <iostream>
using namespace std;

enum { q1, q2, qZ };

int main() {
    char tape[] = {'_', 'a', 'b', 'c', 'd', '_'};
    int size = sizeof(tape) / sizeof(tape[0]);
    int head = 1;
    int condition = q1;
    char saved;

    while (condition != qZ) {
        switch (condition) {

            case q1:
                if (tape[head] != '_') {
                    head++;
                }
                else {
                    head--;
                    saved = tape[head];
                    condition = q2;
                }
                break;

            case q2:
                if (tape[head - 1] != '_') {
                    tape[head] = tape[head - 1];
                    head--;
                }
                else {
                    tape[head] = saved;
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
