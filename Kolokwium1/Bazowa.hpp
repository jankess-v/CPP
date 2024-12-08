#include <iostream>

using namespace std;

class Bazowa {
private:
    int liczba;
public:
//    Bazowa(){}

    Bazowa(int number){
        this->liczba = number;
    }

    void print(){
        cout << "liczba bazowa: " << liczba << endl;
    }

    virtual void show(){
        cout << "liczba bazowa virtual: " << liczba << endl;
    }
};