#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 1.0;
    double b = 2.0;
    int k = 10;
    int n = 15;
    double eps = 0.0001;
    double step; 

    step = (b - a) / k;

    cout << "Вычисление функции" << endl;

    for (int i = 0; i <= k; i++) {
        double x = a + i * step;

        double SN = 1.0;
        double an = 1.0;
        
        for (int j = 1; j <= n; j++) {
            an *= x / j;
            SN += an;
        }

        double SE = 1.0;
        double ae = 1.0;
        int iter = 0;
        
        while (fabs(ae) > eps) {
            iter++;
            ae *= x / iter;
            SE += ae;
        }

        double Y = exp(x);

        // Самый простой вывод без ограничений
        cout << "X=" << x 
             << "   SN=" << SN 
             << "   SE=" << SE 
             << "   Y=" << Y << endl;
    }

    return 0;
}