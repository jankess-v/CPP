#include "TeamLeader.h"
#include "Employee.h"
#include <iostream>

TeamLeader::TeamLeader() {
    cout << "Konstruktor bezparametrowy TeamLeader" << endl;
}

TeamLeader::TeamLeader(string surname, int age, int experience, double salary):
    Employee(surname, age, experience, salary) {
    cout << "Konstruktor z parametrami TeamLeader" << endl;
}

double TeamLeader::calculateBonus(int value) {
    return value*(1+getSalary()+getExperience());
}

void TeamLeader::show() {
    cout << "Jestem Team Leaderem z " << getExperience() << " letnim doświadczeniem" << endl;
}

double TeamLeader::calculateSalary(int value) {
    return getSalary();
}
