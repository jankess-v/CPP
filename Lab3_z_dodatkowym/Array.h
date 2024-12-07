#ifndef LAB3_ARRAY_H
#define LAB3_ARRAY_H
#include <iostream>
#include <string>
using namespace std;

template<typename T> class Array{
private:
    T* array;
    int maxSize = 0;
    int index = 0;
public:
    Array(int size){
        if(size < 1){
            cout << "Nieprawidłowy rozmiar" << endl;
        } else {
            maxSize = size;
            array = new T[maxSize];
        }
    }
    Array(){
        maxSize = 10;
        array = new T[maxSize];
    }
    ~Array(){
        delete[] array;
    }

    void bubbleSort()
    {
        int n = maxSize;
        for (int i = 0; i < n - 1; i++)
            for (int j = n - 1; i < j; j--)
                if (array[j] < array[j - 1])
                    swap(array[j], array[j - 1]);
    }

    T getMax(){
        T max = array[0];
        for(int i = 1; i < maxSize; i++){
            if(array[i] > max)
                max = array[i];
        }
        return max;
    }

    void print(){
        for(int i = 0; i < maxSize; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void add(T value){
        array[index] = value;
        index++;
    }

    T getElement(int i){
        return array[i];
    }

    int getSize(){
        return maxSize;
    }
};

template<> string Array<string>::getMax() {
    string max = array[0];
    for(int i = 1; i < maxSize; i++){
        if(array[i].length() > max.length())
            max = array[i];
    }
    return max;
}

template<> void Array<string>::bubbleSort() {
    int n = maxSize;
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (array[j].length() < array[j - 1].length())
                swap(array[j], array[j - 1]);
}
#endif //LAB3_ARRAY_H
