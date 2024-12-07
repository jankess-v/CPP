#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(){}

Animal::Animal(int konczyny, string imie, bool chroniony){
    this->limbNr = konczyny;
    this->name = imie;
    this->protectedAnimal = chroniony;
}

int Animal::getLimbNr(){
    return limbNr;
}

void Animal::setLimbNr(int limbNr){
    this->limbNr = limbNr;
}

string Animal::getName(){
    return name;
}

void Animal::setName(string name){
    this->name = name;
}

bool Animal::getProtectedAnimal(){
    return protectedAnimal;
}

void Animal::setProtectedAnimal(bool protectedAnimal){
    this->protectedAnimal = protectedAnimal;
}

void Animal::giveVoice(){
    cout << "Chrum, miau, hau, piiiii" << endl;
}

void Animal::info(){
    string chroniony = (protectedAnimal) ? "Chroniony" : "Niechroniony";
    cout << "Liczba konczyn: " << limbNr << endl
    << "Imie: " << name << endl
    << chroniony << endl;
}