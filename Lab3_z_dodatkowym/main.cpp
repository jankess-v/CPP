#include <iostream>
#include "Adding.h"
#include "Student.h"
#include "Array.h"
using namespace std;

template <typename T> T minElement(T* array, int size);
template<int divider,typename T> void showConvertingFromGrams(T elem) {
    cout << "Dla podanego typu brak specjalizacji" << endl;
}

template<> void showConvertingFromGrams<10, float>(float elem) {
    double przeliczone = elem / static_cast<double>(10);
    cout << elem << "g = " << przeliczone << " dag"<<endl;
}

template<> void showConvertingFromGrams<1000, float>(float elem) {
    double przeliczone = elem / static_cast<double>(1000);
    cout << elem << "g = " << przeliczone << " kg"<<endl;
}
template<> void showConvertingFromGrams<1000000, float>(float elem) {
    double przeliczone = elem / static_cast<double>(1000000);
    cout << elem << "g = " << przeliczone << " tony"<<endl;
}

template<> void showConvertingFromGrams<10, int>(int elem) {
    double przeliczone = elem / static_cast<double>(100);
    cout << elem << "g = " << przeliczone << " dag"<<endl;
}

template<> void showConvertingFromGrams<1000, int>(int elem) {
    double przeliczone = elem / static_cast<double>(1000);
    cout << elem << "g = " << przeliczone << " kg"<<endl;
}
template<> void showConvertingFromGrams<1000000, int>(int elem) {
    double przeliczone = elem / static_cast<double>(1000000);
    cout << elem << "g = " << przeliczone << " tony"<<endl;
}

int main() {
    //Zad3.1
    Adding<int> a1(5);
    a1.add(6);
    a1.show();

    Adding<string> a2("sigma");
    a2.add("stycznie");
    a2.show();

    Student<float> s(5, "Ala");
    s.showMark();
    Student<int> s1(5, "Ala");
    s1.showMark();


    //Zad3.2
    // int arr[] = {11, 22, 55, 1, 32};
    // float arr1[] = {13.12, 25.6, 11.12, 5.34, 766.1, -54.3};
    // cout << minElement(arr,  size(arr)) << endl;
    // cout << minElement(arr1,  size(arr)) << endl;

    //Zad3.3
//    Array<int> arr(3);
//    arr.add(1);
//    arr.add(2354);
//    arr.add(55);
//    arr.print();
//    arr.bubbleSort();
//    arr.print();
//    cout << "Maksymalny element: " <<arr.getMax() << endl;
//
//    Array<string> arr1(3);
//    arr1.add("cbaasdgf");
//    arr1.add("abasddsgfdc");
//    arr1.add("asdhd");
//    arr1.print();
//    arr1.bubbleSort();
//    cout << "Po sortowaniu:" << endl;
//    arr1.print();
//    cout << "Najdluzszy element: " <<arr1.getMax() << endl;
//
//    showConvertingFromGrams<10, float>(100.7);
//    showConvertingFromGrams<1000, float>(100.23);
//    showConvertingFromGrams<1000000, float>(100.23);
//    showConvertingFromGrams<10, int>(1000);

    return 0;
}

template <typename T> T minElement(T* array, int size)
{
    T min = array[0];
    for(int i = 1; i < size; i++){
        if(min > array[i])
            min = array[i];
    }
    return min;
}