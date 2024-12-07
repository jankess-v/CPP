#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;

class Student : public Person {
private:
    string index;
public:
    Student();
    Student(string name1, string surname1, int age1, string index);
    void setIndex(string newIndex);
    string getIndex();
    void showInfoStudent();
};


#endif //LAB1_STUDENT_H
