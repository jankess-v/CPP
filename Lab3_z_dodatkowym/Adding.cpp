#include "Adding.h"
#include <iostream>
using namespace std;

template<typename T>
Adding<T>::Adding(T value) {
    this->element = value;
}

template<typename T>
void Adding<T>::add(T value) {
    this->element += value;
}

template<typename T>
void Adding<T>::show() {
    cout << "Element: " << element << endl;
}

template class Adding<int>;
template class Adding<float>;
template class Adding<string>;
template class Adding<double>;