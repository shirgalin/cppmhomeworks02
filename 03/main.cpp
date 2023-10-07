#include <iostream>


using namespace std;


struct Address {
    string city;
    string street;
    int house_number;
    int apartment;
    int postal_code;
};


void Print_Address(Address* a) {
    cout << "Город: " << a->city << endl;
    cout << "Улица: " << a->street << endl;
    cout << "Номер дома: " << a->house_number << endl;
    cout << "Номер квартиры: " << a->apartment << endl;
    cout << "Индекс: " << a->postal_code << endl;
}


int main() {
    Address as;
    string city, street;
    int house_number, postal_code, apartment;
    cout << "Город: "; cin >> city;
    as.city = city;
    cout << "Улица: "; cin >> street;
    as.street = street;
    cout << "Номер дома: "; cin >> house_number;
    as.house_number = house_number;
    cout << "Номер квартиры: "; cin >> apartment;
    as.apartment = apartment;
    cout << "Индекс: "; cin >> postal_code;
    as.postal_code = postal_code;
    cout << endl;
    Print_Address(&as);
    return 0;
}
