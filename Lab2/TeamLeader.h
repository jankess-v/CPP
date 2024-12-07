#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Employee.h"


class TeamLeader : public Employee{
public:
    TeamLeader();
    TeamLeader(string surname, int age, int experience, double salary);
    double calculateBonus(int value);
    double calculateSalary(int value) override;
    void show() override;
};



#endif //TEAMLEADER_H
