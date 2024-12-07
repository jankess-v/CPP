#include "MaxBufor.h"
#include <iostream>
using namespace std;

double MaxBufor::calculate() {
    int max = getFirst();
    for(int i = 1; i < getSize(); i++){
        if(max < getTab(i))
            max = getTab(i);
    }
    return max;
}

void MaxBufor::add(int value) {
    if(getIndex() < getSize()) {
        setTab(getIndex(), value);
        setFirst(getIndex()+1);
    } else cout << "Brak miejsca" << endl;
}

MaxBufor::MaxBufor() {

}

MaxBufor::~MaxBufor() {}