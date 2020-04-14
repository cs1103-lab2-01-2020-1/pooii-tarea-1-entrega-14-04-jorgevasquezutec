//
// Created by Jorge Luis Vasquez on 13/04/2020.
//

#ifndef WORKSPACE_INTERGER_H
#define WORKSPACE_INTERGER_H


class Interger {
private:
    int i;
public:
    Interger(int a);
    Interger();
    ~Interger();
    Interger & operator=(int &number);
    Interger & operator=(const Interger & that);
    Interger operator-(const Interger & that);
    Interger & operator-=(const Interger & that);
    Interger operator+(const Interger & that);
    Interger & operator+=(const Interger & that);
    Interger operator*(const Interger & that);
    Interger & operator*=(const Interger & that);
    Interger operator/(const Interger & that);
    Interger operator^(const Interger & that);
    bool operator>(const Interger & that);
    bool operator>=(const Interger & that);
    bool operator<(const Interger & that);
    bool operator<=(const Interger & that);
    bool operator!=(const Interger & that);
    bool operator==(const Interger & that);




    static int potenciaRecursiva(int base,int exponente);
    friend ostream & operator << (ostream &out, const Interger &c);



};


#endif //WORKSPACE_INTERGER_H
