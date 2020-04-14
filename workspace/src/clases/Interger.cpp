//
// Created by Jorge Luis Vasquez on 13/04/2020.
//

#include "Interger.h"

Interger::Interger() {
    this->i=0;
}
Interger::Interger(int a) {
    this->i=a;
}

Interger::operator int()
{
    return this->i;
}

Interger& Interger::operator=(const Interger &that) {
    if (this != &that)
    {
        this->i=that.i;
    }
    return *this;
}
Interger& Interger::operator=(int &number) {
    if (this->i != number)
    {
        this->i=number;
    }
    return *this;
}

Interger Interger::operator-(int number) {
    return  this->i+number;
}
Interger Interger::operator-=(int number) {
    return this->i -= number;
}
Interger Interger::operator+(int number) {
    return this->i+number;
}

Interger Interger::operator+=(int number) {
    return this->i+=number;
}





ostream& operator<<(ostream &out, const Interger &c) {
    out << c.i;
    return out;
}


Interger Interger::operator*(int number) {
    return this->i*number;
}

Interger Interger::operator*=(int number) {
    return  this->i*=number;
}
Interger Interger::operator/(int number) {
    return  this->i/number;
}

Interger Interger::operator^(int number) {
    return potenciaRecursiva(this->i,number);

}

int Interger::potenciaRecursiva(int base, int exponente) {
    if(exponente==0)
        return 1;
    if(exponente<0){
        return 1/(base*potenciaRecursiva(base,exponente-1));
    }
    else
        return base*potenciaRecursiva(base,exponente-1);
}

bool Interger::operator<(int number) {
    return (this->i<number);
}
bool Interger::operator<=(int number) {
    return (this->i<=number);
}
bool Interger::operator>(int number) {
    return (this->i>number);
}
bool Interger::operator>=(int number) {
    return (this->i>=number);
}

bool Interger::operator!=(int number) {
    return (this->i!=number);
}
bool Interger::operator==(int number) {
    return (this->i==number);
}
