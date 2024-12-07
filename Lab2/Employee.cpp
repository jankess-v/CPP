#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
    cout << "Konstruktor bezparametrowy Employee" << endl;
}

Employee::Employee(string surname, int age, int experience, double salary) {
    this->surname = surname;
    this->age = age;
    this->experience = experience;
    this->salary = salary;
}

Employee::~Employee() {
    cout << "Destruktor Employee" << endl;
}

void Employee::show() {
    cout << "Nazwisko: " << this->surname << endl;
    cout << "Wiek: " << this->age << endl;
    cout << "Doświadczenie: " << this->experience << endl;
    cout << "Pensja: " << this->salary << endl;
}

int Employee::ageEmployment() {
    return age - experience;
}

string Employee::getSurname() {
    return this->surname;
}

int Employee::getAge() {
    return this->age;
}

int Employee::getExperience() {
    return this->experience;
}

double Employee::getSalary() {
    return this->salary;
}
