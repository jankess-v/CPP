#ifndef LAB2_BUFOR_H
#define LAB2_BUFOR_H


class Bufor {
private:
    int* array;
    int size = 0;
    int index = 0;
public:
    Bufor();
    Bufor(int size);
    virtual ~Bufor();
    void add(int value);
    virtual double calculate()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void show();
};


#endif //LAB2_BUFOR_H
