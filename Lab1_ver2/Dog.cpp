#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(string rasa, int lvlPrzewodzenia, int lvlSledzenia){
    if(lvlSledzenia > 0 && lvlPrzewodzenia > 0 && lvlSledzenia <= 10 && lvlPrzewodzenia <= 10) {
        this->breed = rasa;
        this->levelOfGuideSkills = lvlPrzewodzenia;
        this->levelOfTrackerSkills = lvlSledzenia;
    } else{
        cout << "Niepoprawny poziom" << endl;
    }
}

Dog::Dog(int iloscKonczyn, string imie, bool chroniony) : Animal(iloscKonczyn, imie, chroniony){}

Dog::Dog(){}

void Dog::setSkillLevel(int type, int value){
    if(type == 0 && value <= 10 && value > 0){
        levelOfTrackerSkills = value;
    }
    else if(type == 1 && value <= 10 && value > 0){
        levelOfGuideSkills = value;
    } else{
        cout << "Niepoprawny typ!" << endl;
    }
}

int Dog::getSkillLevel(int type){
    if(type == 0){
        if(levelOfTrackerSkills != 0){
            return levelOfTrackerSkills;
        }
    } else if(type == 1){
        if(levelOfGuideSkills != 0){
            return levelOfGuideSkills;
        }
    }
    return 0;
}

void Dog::giveVoice(){
    cout << "Hau, hau" << endl;
}

void Dog::info(){
    Animal::info();
    cout << "Rasa: " << breed << endl
    << "Poziom przewodnika: " << levelOfGuideSkills << endl
    << "Poziom tropiciela: " << levelOfTrackerSkills << endl;
}