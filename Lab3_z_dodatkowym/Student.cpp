#include "Student.h"
#include <iostream>
using namespace std;

template <typename T>
Student<T>::Student(int mark, string name){
    this->mark = mark;
    this->name = name;
}

template <typename T>
Student<T>::Student() {}

template <typename T>
void Student<T>::show() {
    cout << "Imie: " << name << " ocena: " << mark << endl;
}

template <typename T>
void Student<T>::showMark() {
    cout << mark << endl;
}

template<>
void Student<int>::showMark() {
    cout << "Twoja ocena to: " << mark << endl;
}

template class Student<int>;
template class Student<float>;

template<> class Student<string>
{
private:
    string name;
    int mark;
public:
    Student(int mark, string name){
        this->mark = mark;
        this->name = name;
    }
    Student(){}
    void show(){
        cout << "Imie: " << name << " ocena: " << mark << endl;
    }
    int showMark(){
        string word[6] = {"jeden", "dwa", "trzy", "cztery", "piec", "szesc"};
        cout << "Twoja ocena to: " << word[mark-1] << endl;
        return mark;
    }
};