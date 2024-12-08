#include <iostream>
#include "Bazowa.hpp"
#include "Pochodna.hpp"
#include "GrupaDziekanska.h"
using namespace std;


template<typename T>
void showConvertingFromGrams(int divider, T grams){
    cout << "Brak specjalizacji dla podanego typu" << endl;
}

template<>
void showConvertingFromGrams<int>(int divider, int grams){
    switch(divider){
        case 1:
            cout << grams << "g = " << grams/divider << "dag" << endl;
            break;
        case 10:
            cout << grams << "g = " << grams/divider << "dag" << endl;
            break;
        case 100:
            cout << grams << "g = " << (grams/divider)*10 << "dag" << endl;
            break;
        case 1000:
            cout << grams << "g = " << grams/divider << "kg" << endl;
            break;
        case 1000000:
            cout << grams << "g = " << grams/divider << "ton" << endl;
            break;
    }
}

template<>
void showConvertingFromGrams<float>(int divider, float grams){
    switch(divider){
        case 1:
            cout << grams << "g = " << grams/static_cast<float>(divider) << "g" << endl;
        case 10:
            cout << grams << "g = " << grams/static_cast<float>(divider) << "dag" << endl;
            break;
        case 100:
            cout << grams << "g = " << (grams/static_cast<float>(divider))*10 << "dag" << endl;
            break;
        case 1000:
            cout << grams << "g = " << grams/static_cast<float>(divider) << "kg" << endl;
            break;
        case 1000000:
            cout << grams << "g = " << grams/static_cast<float>(divider) << "ton" << endl;
            break;
    }
}

int main() {
    Bazowa base(10);
    Pochodna poch(10);
    cout << "base.print()" << endl;
    base.print();
    cout << "base.show()" << endl;
    base.show();
    cout << "poch.print()" << endl;
    poch.print();
    cout << "poch.show()" << endl;
    poch.show();

    showConvertingFromGrams<int>(100, 1000);
    cout << endl;
    showConvertingFromGrams<float>(100, 100.7);
    cout << endl;
    showConvertingFromGrams<string>(1000, "essa");

    GrupaDziekanska group;
    group.wyswietlGrupe();

    auto p = group.findKlucz("jan.kowalski@gmail.com");
    cout << "Znaleziony klucz: " << p.first << " " << p.second << endl;

    group.szukajWartosc("1100");
    return 0;
}
