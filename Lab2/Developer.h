#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"


class Developer : public Employee{
public:
    Developer();
    Developer(string surname, int age, int experience, double salary);
    double calculateBonus(int value);
    double calculateSalary(int value) override;
};



#endif //DEVELOPER_H
