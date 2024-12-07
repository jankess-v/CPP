#ifndef LAB4_CITIZEN_H
#define LAB4_CITIZEN_H
#include <iostream>
using namespace std;

class Citizen {
private:
    std::string name, surname, postal_code;
    int age;
    char sex;
public:
    Citizen(){}
    Citizen(string name, string surname, string post, int age, char sex){
        this->name = name;
        this->surname = surname;
        postal_code = post;
        this->age = age;
        this->sex = sex;
    }
    void show(){
        cout << name << " " << surname << " " << sex << " " << age << " " << postal_code;
    }

    string getName(){
        return name;
    }

    string getSurname(){
        return surname;
    }

    string getPostal_code(){
        return postal_code;
    }

    int getAge(){
        return age;
    }

    char getSex(){
        return sex;
    }
};


#endif //LAB4_CITIZEN_H
