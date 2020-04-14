//
// Created by Jorge Luis Vasquez on 13/04/2020.
//

#ifndef WORKSPACE_NUMBER_H
#define WORKSPACE_NUMBER_H

template <typename T>
class Number {
private:
    T i;
public:
    Number();
    Number(T number);
    operator T();
    Number& operator=(const Number &other);
    Number& operator=(T& number);
    Number operator-(T number);
    Number operator-=(T number);
    Number operator+(T number);
    Number operator+=(T number);
    Number operator*(T number);
    Number operator*=(T number);
    Number operator/(T number);
    Number operator^(T number);
    bool operator>(T number);
    bool operator>=(T number);
    bool operator<(T number);
    bool operator<=(T number);
    bool operator!=(T number);
    bool operator==(T number);
    static T potenciaRecursiva(T base, T exponente);

    template <typename U>
    friend ostream& operator<<(ostream &out, const Number<U> &number);

};

#endif //WORKSPACE_NUMBER_H
