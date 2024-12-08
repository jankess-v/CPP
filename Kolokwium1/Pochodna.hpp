#include <iostream>

using namespace std;

class Pochodna : public Bazowa {
private:
    int liczba;
public:
    Pochodna(int number) : Bazowa(number){
        this->liczba = number * 100;
    }

    void print(){
        cout << "liczba pochodna: " << this->liczba << endl;
    }

    void show(){
        cout << "liczba pochodna virtual: " << this->liczba << endl;
    }
};