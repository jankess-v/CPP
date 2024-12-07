#include <iostream>
#include "Developer.h"
#include "TeamLeader.h"
#include "Employee.h"
#include "Bufor.h"
#include "MaxBufor.h"
#include "MeanBufor.h"
using namespace std;

void whoWorkMoreThan5Years(Employee **employees, int size);
int howManyEarnLessThanMeanBonus(Employee **employees, int size);

int main() {
    //Zad2.2
//    string surname;
//    double salary;
//    int n, exp, age;
//    Employee **employees;
//    while(n < 2) {
//        cout << "Podaj liczbe pracownikow: ";
//        cin >> n;
//    }
//
//    employees = new Employee* [n];
//    for(int i = 0; i < n-1; i++) {
//        cout << "Nazwisko: ";
//        cin >> surname;
//        cout << "Wiek: ";
//        cin >> age;
//        cout << "Doswiadczenie: ";
//        cin >> exp;
//        cout << "Pensja: ";
//        cin >> salary;
//        employees[i] = new Developer(surname, age, exp, salary);
//    }
//    employees[n-1] = new TeamLeader("Sigma", 35, 10, 12500);
//
//    whoWorkMoreThan5Years(employees, n);
//    cout << howManyEarnLessThanMeanBonus(employees, n) << " = ilosc osob zarabiajacych mniej niz srednia" << endl;
//
//    for(int i = 0; i < n; i++) {
//        delete employees[i];
//    }

    //Zad2.3
    MeanBufor* arr = new MeanBufor(5);
    arr->show();
    cout << "Srednia: " << arr->calculate();
    return 0;
}

void whoWorkMoreThan5Years(Employee **employees, int size) {
    for(int i = 0; i < size; i++) {
        if(employees[i]->getExperience() > 5) {
            employees[i]->show();
        }
    }
}

int howManyEarnLessThanMeanBonus(Employee **employees, int size) {
    int counter = 0;
    double srednia = 0;
    for (int i = 0; i < size; i++) {
        srednia += employees[i]->getSalary();
    }
    srednia /= size;
    for(int i = 0; i < size; i++) {
        if(employees[i]->getSalary() < srednia)
            counter++;
    }
    return counter;
}