#include <iostream>

using namespace std;

enum class Months {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main() {
    setlocale (LC_ALL, "Russian");
    int m1;
    do {
        cout << "Введите номер месяца: ";
        cin >> m1;
        Months m = static_cast<Months>(m1);
        if (m1 > 12 || m1 < 0) {
            cout << "Неправильный номер!" << endl;
        }
        switch (m) {
            case Months::January:
                cout << "Январь" << endl;
                break;
            case Months::February:
                cout << "Февраль" << endl;
                break;
            case Months::March:
                cout << "Март" << endl;
                break;
            case Months::April:
                cout << "Апрель" << endl;
                break;
            case Months::May:
                cout << "Май" << endl;
                break;
            case Months::June:
                cout << "Июнь" << endl;
                break;
            case Months::July:
                cout << "Июль" << endl;
                break;
            case Months::August:
                cout << "Август" << endl;
                break;
            case Months::September:
                cout << "Сентябрь" << endl;
                break;
            case Months::October:
                cout << "Октябрь" << endl;
                break;
            case Months::November:
                cout << "Ноябрь" << endl;
                break;
            case Months::December:
                cout << "Декабрь" << endl;
                break;
        }
    } while (m1 != 0);

    if (m1 == 0) {
        cout << "До свидания";
        return 0;
    }
    return 0;
}