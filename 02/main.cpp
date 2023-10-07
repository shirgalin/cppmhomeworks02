#include <iostream>


using namespace std;


struct Bank {
    int account_number;
    string name;
    double balance;
};


void edit_Bank(Bank* b, double& balance) {
    cout << "Введите новый баланс: "; cin >> balance;;
    b->balance;
}


int main() {
    Bank bk;
    Bank* bk_array = new Bank[3];
    int account_number;
    string name;
    double balance;
    cout << "Введите номер счёта: "; cin >> account_number;
    bk.account_number = account_number;
    cout << "Введите имя владельца: "; cin >> name;
    bk.name = name;
    cout << "Введите баланс: "; cin >> balance;
    bk.balance = balance;
    edit_Bank(&bk, balance);
    bk_array[0].name = name;
    bk_array[0].account_number = account_number;
    bk_array[0].balance = balance;
    cout << bk_array[0].name << ", " << bk_array[0].account_number << ", " << bk_array[0].balance << endl;
    return 0;
}
