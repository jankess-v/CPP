#ifndef LAB2_MEANBUFOR_H
#define LAB2_MEANBUFOR_H
#include "Bufor.h"

class MeanBufor : public Bufor{
public:
    double calculate() override;
    MeanBufor();
    MeanBufor(int size);
    virtual ~MeanBufor();
};


#endif //LAB2_MEANBUFOR_H
