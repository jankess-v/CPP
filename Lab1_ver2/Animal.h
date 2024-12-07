#ifndef LAB1_ANIMAL_H
#define LAB1_ANIMAL_H
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    int limbNr = 0;
    string name;
    bool protectedAnimal;
public:
    Animal();
    Animal(int konczyny, string imie, bool chroniony = true);
    int getLimbNr();
    void setLimbNr(int limbNr);
    string getName();
    void setName(string name);
    bool getProtectedAnimal();
    void setProtectedAnimal(bool protectedAnimal);
    void giveVoice();
    void info();
};


#endif //LAB1_ANIMAL_H
