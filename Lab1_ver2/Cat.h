#ifndef LAB1_CAT_H
#define LAB1_CAT_H

#include "Animal.h"

class Cat : public Animal{
private:
    int levelOfMouseHunting = 0;
    int mice[5];
public:
    Cat(int limbNr, string name, bool chroniony);
    Cat();
    void initMice();
    void initCat();
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);
    void giveVoice();
    void info();
};


#endif //LAB1_CAT_H
