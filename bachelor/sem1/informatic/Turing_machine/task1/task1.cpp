#include <iostream>
using namespace std;

enum { q1, qZ };

int main() {
    char tape[] = {'_', '1', '0', '1', '1', '0', '_'};
    int size = sizeof(tape) / sizeof(tape[0]);
    int head = 1;
    int condition = q1;

    while (condition != qZ) {
        switch (condition) {

            case q1:
                if (tape[head] == '0') {
                    tape[head] = '1';
                    head++;
                }
                else if (tape[head] == '1') {
                    tape[head] = '0';
                    head++;
                }
                else {
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
