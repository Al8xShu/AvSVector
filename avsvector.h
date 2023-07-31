#include <iostream>

using namespace std;

#ifndef AVSVECTOR_H
#define AVSVECTOR_H

template<typename T>
class avsVector{
private:

    T *array;
    int sizeOfArray;
    int capacityOfArray;

public:

    avsVector() : array(new T[1]), sizeOfArray(0), capacityOfArray(1){}
    ~avsVector();
    int size();
    int getCapacity();
    void pushBack(T);
    void insert(T value, int index);
    T getValue(int index);
    void popBack();
    void clear();
    void display();

};

template<typename T>
avsVector<T>::~avsVector(){
    delete []array;
}

template<typename T>
int avsVector<T>::size(){ return sizeOfArray; }

template<typename T>
int avsVector<T>::getCapacity(){ return capacityOfArray; }

template<typename T>
void avsVector<T>::pushBack(T value){

    if(sizeOfArray == capacityOfArray){
        T *temp = new T[capacityOfArray * 2];
        for(int i = 0; i < capacityOfArray; i++){
            temp[i] = array[i];
        }
        delete []array;
        capacityOfArray *= 2;
        array = temp;
    }

    array[sizeOfArray] = value;
    sizeOfArray++;

}

template<typename T>
void avsVector<T>::insert(T value, int index){

    if(index == capacityOfArray){
        pushBack(value);
    } else {
        array[index] = value;
    }

}

template<typename T>
T avsVector<T>::getValue(int index){ return array[index]; }

template<typename T>
void avsVector<T>::popBack(){ sizeOfArray--; }

template<typename T>
void avsVector<T>::clear(){

    delete []array;
    array = new T[1];
    sizeOfArray = 0;
    capacityOfArray = 1;

}

template<typename T>
void avsVector<T>::display(){

    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

}

#endif
