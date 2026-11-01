#include <iostream>
using namespace std;

enum { q1, q2, q3, q4, qZ };

int main() {
    char tape[] = {'_', 'a', 'b', 'c', 'h', 'a', '_'};
    int head = 1;
    int condition = q1;
    char saved;
    bool result = true;

    while (condition != qZ) {
        switch (condition) {

            case q1:
                if (tape[head] == '_') {
                    condition = qZ;
                }
                else {
                    saved = tape[head];
                    tape[head] = '_';
                    head++;
                    condition = q2;
                }
                break;

            case q2:
                if (tape[head] != '_') {
                    head++;
                }
                else {
                    head--;
                    condition = q3;
                }
                break;

            case q3:
                if (tape[head] == '_') {
                    condition = qZ;
                }
                else if (tape[head] == saved) {
                    tape[head] = '_';
                    head--;
                    condition = q4;
                }
                else {
                    result = false;
                    condition = qZ;
                }
                break;

            case q4:
                if (tape[head] != '_') {
                    head--;
                }
                else {
                    head++;
                    condition = q1;
                }
                break;
        }
    }

    if (result)
        cout << "Палиндром\n";
    else
        cout << "Не палиндром\n";

    return 0;
}
