//
// Created by Jorge Luis Vasquez on 13/04/2020.
//

#include "Number.h"
template <typename  T>
Number<T>::Number() {
    this->i=0;
}
template <typename  T>
Number<T>::Number(T a) {
    this->i=a.i;
}
template <typename T>
Number<T>::~Number(){

}
template <typename T>
Number<T>& Number<T>::operator=(T &number) {
    if (this->i != number)
    {
        this->i=number;
    }
    return *this;
}

template <typename T>
Number<T>& Number<T>::operator=(const Number<T> &number) {
    if (this != &number)
    {
        this->i=number.i;
    }
    return *this;
}