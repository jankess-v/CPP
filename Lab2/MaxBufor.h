#ifndef LAB2_MAXBUFOR_H
#define LAB2_MAXBUFOR_H
#include "Bufor.h"

class MaxBufor : public Bufor{
public:
    double calculate() override;
    void add(int value);
    MaxBufor();
    virtual ~MaxBufor();
};


#endif //LAB2_MAXBUFOR_H
