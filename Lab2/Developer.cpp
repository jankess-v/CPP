#include "Developer.h"
#include <iostream>
using namespace std;

Developer::Developer() {
    cout << "Konstruktor bezparametrowy Developer" << endl;
}

Developer::Developer(string surname, int age, int experience, double salary)
    :Employee(surname, age, experience, salary){
    cout << "Konstruktor z parametrami Developer" << endl;
}

double Developer::calculateBonus(int value) {
    return value + 0.2*value*(getSalary()+getExperience());
}

double Developer::calculateSalary(int value) {
    return getSalary();
}