#include <iostream>
#include <vector>
#include "Student.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

void zad1();
int howManyProtectedAnimals(Animal *animals, int size);
void howManyTrackerDogs(Dog *dogs, int size);
void howManyCats(Cat *cats, int size);

int main() {
    srand((unsigned int)time(NULL));
//    zad1();

//    Dog dog1(4, "Jacek", false);
//    Dog dog2(4, "Robert", true);
//    Dog dog3(4, "Miałek", false);
//    Cat kot1(4, "Roman", true);
//    Animal animals[] = {dog1, dog2, dog3, kot1};
//    cout << "Ilosc chronionych zwierzat: " << howManyProtectedAnimals(animals, size(animals)) << endl;

    // Dog dog4("Pitbull", 6, 5);
    // Dog dog5("York", 1, 7);
    // Dog dog6("Samoyed", 8, 8);
    // Dog dogs[] = {dog4, dog5, dog6};
    // howManyTrackerDogs(dogs, size(dogs));

    Cat cat1(4, "Robert", true);
    cat1.initMice();
    Cat cat2(3, "Filemon", true);
    cat2.initMice();
    Cat cat3(4, "Maciek", false);
    cat3.initMice();

    Cat cats[] = {cat1, cat2, cat3};
    howManyCats(cats, 3);
}

void zad1(){
    Student arr[3];
    Student *arr2;
    Student *arr3[3];
    Student **arr4;

    for (int i = 0; i < 3; ++i) {
        arr[i].init("Jakub", "Jankowski", 21+i);
        arr[i].setIndex("9955"+to_string(i));
        arr[i].showInfoStudent();
    }

    arr2 = new Student[3];
    for (int i = 0; i < 3; ++i) {
        arr2[i].init("Jacek", "Swistak", 21+i);
        arr2[i].setIndex("9955"+to_string(i));
        arr2[i].showInfoStudent();
    }

    for (int i = 0; i < 3; ++i) {
        arr3[i] = new Student("Waclaw", "Essa", 21+i, "9955"+to_string(i));
        arr3[i]->showInfoStudent();
    }

    arr4 = new Student*[3];
    for (int i = 0; i < 3; ++i) {
        arr4[i] = new Student("Ewa", "Farna", 21+i, "9955"+to_string(i));
        arr4[i]->showInfoStudent();
    }

    for(int i = 0; i < 3; i++){
        delete arr3[i];
        delete arr4[i];
    }
    delete []arr4;
}

int howManyProtectedAnimals(Animal *animals, int size){
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(animals[i].getProtectedAnimal()){
            counter++;
        }
    }
    return counter;
}

void howManyTrackerDogs(Dog *dogs, int size){
    for(int i = 0; i < size; i++){
        if(dogs[i].getSkillLevel(0) > dogs[i].getSkillLevel(1)){
            dogs[i].info();
        }
    }
}

void howManyCats(Cat *cats, int size) {
    int counter = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < 5; j++) {
            counter += cats[i].getMice(j);
        }
        cout << "Kot " << i+1 << " - Liczba upolowanych myszy: " << counter << endl;
        counter = 0;
    }
}
