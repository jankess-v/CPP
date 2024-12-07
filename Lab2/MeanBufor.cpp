#include "MeanBufor.h"

double MeanBufor::calculate() {
    double suma = 0;
    for(int i = 0; i < getSize(); i++){
        suma += getTab(i);
    }
    return suma / getSize();
}

MeanBufor::MeanBufor() : Bufor() {}
MeanBufor::MeanBufor(int size) : Bufor(size){}
MeanBufor::~MeanBufor() {}