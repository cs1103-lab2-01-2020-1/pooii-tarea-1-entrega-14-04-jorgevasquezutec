//
// Created by Jorge Luis Vasquez on 13/04/2020.
//

#include "Number.h"
template <typename  T>
Number<T>::Number() {
    this->i=0;
}
template <typename  T>
Number<T>::Number(T number) {
    this->i=number;
}

template <typename T>
Number<T>::operator T() {
    return this->i;
}
template <typename T>
Number<T>& Number<T>::operator=(T &number) {
    this->i=number;
    return *this;
}
template <typename T>
 Number<T>& Number<T>::operator=(const Number &other) {
    if (this != &other)
    {
        this->i=other.i;
    }
    return *this;
}

template <typename T>
 Number<T> Number<T>::operator-(T number) {
    return  this->i+number;
}
template <typename T>
Number<T> Number<T>::operator-=(T number) {
    return this->i -= number;
}

template <typename T>
Number<T> Number<T>::operator+(T number) {
    return this->i+number;
}

template <typename T>
Number<T> Number<T>::operator+=(T number) {
    return this->i+=number;
}


template <typename T>
Number<T> Number<T>::operator*(T number) {
    return this->i*number;
}

template <typename T>
Number<T> Number<T>::operator*=(T number) {
    return  this->i*=number;
}
template <typename T>
Number<T> Number<T>::operator/(T number) {
    return  this->i/number;
}

template <typename T>
Number<T> Number<T>::operator^(T number) {
    return potenciaRecursiva(this->i,number);

}
template <typename T>
bool  Number<T>::operator<(T number) {
    return (this->i<number);
}
template <typename T>
bool  Number<T>::operator<=(T number) {
    return (this->i<=number);
}
template <typename T>
bool  Number<T>::operator>(T number) {
    return (this->i>number);
}
template <typename T>
bool  Number<T>::operator>=(T number) {
    return (this->i>=number);
}

template <typename T>
bool  Number<T>::operator!=(T number) {
    return (this->i!=number);
}
template <typename T>
bool  Number<T>::operator==(T number) {
    return (this->i==number);
}


template <typename T>
T  Number<T>::potenciaRecursiva(T base, T exponente){
    if(exponente==0)
        return 1;
    if(exponente<0){
        return 1/(base*potenciaRecursiva(base,exponente-1));
    }
    else
        return base*potenciaRecursiva(base,exponente-1);
}

template <typename U>
ostream& operator<<(ostream &out, const Number<U> &number){
    out << number.i;
    return out;
}

