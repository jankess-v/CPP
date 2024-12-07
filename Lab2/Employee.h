#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
private:
    string surname;
    int age, experience;
    double salary;
public:
    Employee(string surname, int age, int experience, double salary);
    Employee();
    virtual ~Employee();

    virtual void show();
    virtual double calculateSalary(int value)=0;
    int ageEmployment();
    //Gettery
    string getSurname();
    int getAge();
    int getExperience();
    double getSalary();
};



#endif //EMPLOYEE_H
