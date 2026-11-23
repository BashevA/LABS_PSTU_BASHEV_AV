// Создать программу для подсчета дохода от показа рекламы на веб-сайте. Объявите структуру Advertising

#include <iostream>
using namespace std;

struct Advertising
{
    int viewAdds;
    double percentGuestsClick;
    double middleIncome;
};


int main()
{
    Advertising ad;
    cout << "Введите количество просмотров рекламы: ";
    cin >> ad.viewAdds;
    cout << "Введите процент гостей, которые кликнули на рекламу: ";
    cin >> ad.percentGuestsClick;
    cout << "Введите средний доход от одного клика: ";
    cin >> ad.middleIncome;

    double summ = ad.viewAdds * (ad.percentGuestsClick / 100) * ad.middleIncome;
    cout << "Общий доход от показа рекламы: " << summ << endl;

    return 0;
}