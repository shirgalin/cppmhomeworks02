#include <iostream>


using namespace std;


struct Bank {
    int account_number;
    string name;
    double balance;
};


void edit_Bank(Bank* b, double& balance) {
    b->balance;
}


int main() {
    Bank bk;
    int account_number;
    string name;
    double balance;
    cout << "Введите номер счёта: "; cin >> account_number;
    bk.account_number = account_number;
    cout << "Введите имя владельца: "; cin >> name;
    bk.name = name;
    cout << "Введите баланс: "; cin >> balance;
    bk.balance = balance;
    cout << "Введите новый баланс: "; cin >> balance;
    edit_Bank(&bk, balance);
    bk.balance = balance;
    cout << bk.name << ", " << bk.account_number << ", " << bk.balance << endl;
    return 0;
}
