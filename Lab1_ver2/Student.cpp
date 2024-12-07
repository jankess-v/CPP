#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;

Student::Student(){}

Student::Student(string name1, string surname1, int age1, string index) : Person(name1, surname1, age1){
    this->index = index;
    cout << "Konstruktor klasy pochodnej - Student" << endl;
}

void Student::setIndex(std::string newIndex) {
    index = newIndex;
}

string Student::getIndex() {
    return index;
}

void Student::showInfoStudent() {
    Student::showInfoPerson();
    cout << "Index: " << index << endl;
}