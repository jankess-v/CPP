#include "Bufor.h"
#include <iostream>
using namespace std;

Bufor::Bufor() {
    array = new int[10];
    this->size = 10;
    array[0] = 0;
}

Bufor::Bufor(int size) {
    if(size < 0){
        cout << "Niepoprawny rozmiar tablicy" << endl;
    } else {
        array = new int[size];
        this->size = size;
        array[index] = 0;
    }
}

Bufor::~Bufor() {
    delete array;
}

void Bufor::add(int value){
    if(index < size) {
        array[index] = value;
        index++;
    } else cout << "Brak miejsca" << endl;
}

int Bufor::getIndex(){
    return index;
}

int Bufor::getSize() {
    return size;
}

int Bufor::getTab(int i) {
    return array[i];
}

int Bufor::getFirst() {
    return array[0];
}

void Bufor::setFirst(int value) {
    array[index] = value;
}

void Bufor::setTab(int pos, int value) {
    if(pos < size){
        array[pos] = value;
    } else cout << "Niepoprawny index" << endl;
}

void Bufor::show() {
    for(int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}