#include "Cat.h"
#include <iostream>

Cat::Cat(int limbNr, string name, bool chroniony) : Animal(limbNr, name, chroniony){

}

Cat::Cat(){

}

void Cat::initMice()
{
    for (int i = 0; i < 5; i++)
        mice[i] = rand() % 11;
}

void Cat::initCat(){
    cout << "Poziom tropienia myszy: ";
    cin >> levelOfMouseHunting;
    initMice();
}

void Cat::setLevelOfMouseHunting(int value){
    levelOfMouseHunting = value;
}

int Cat::getLevelOfMouseHunting(){
    return levelOfMouseHunting;
}

int Cat::getMice(int index){
    return mice[index];
}

void Cat::giveVoice(){
    cout << "Miau, miau" << endl;
}

void Cat::info(){
    Animal::info();
    cout << "Poziom tropienia myszy: " << levelOfMouseHunting << endl;
    cout << "Liczba upolowanych myszy w ciagu ostatnich 5 lat: ";
    for(int i : mice)
        cout << i << " ";
}