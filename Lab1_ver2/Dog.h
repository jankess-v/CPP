#ifndef LAB1_DOG_H
#define LAB1_DOG_H
#include <iostream>
#include "Animal.h"
using namespace std;

class Dog : public Animal{
private:
    string breed;
    int levelOfGuideSkills = 0;
    int levelOfTrackerSkills = 0;
public:
    Dog(string rasa, int lvlPrzewodzenia, int lvlSledzenia);
    Dog(int iloscKonczyn, string imie, bool chroniony);
    Dog();
    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();
};


#endif //LAB1_DOG_H
