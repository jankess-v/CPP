#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H
#include <string>

using namespace std;

template <typename T> class Student {
private:
    string name;
    int mark;
public:
    Student(int mark, string name);
    Student();
    void show();
    void showMark();
};


#endif //LAB3_STUDENT_H
