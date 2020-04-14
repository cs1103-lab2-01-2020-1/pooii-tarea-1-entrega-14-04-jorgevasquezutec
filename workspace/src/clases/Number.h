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
    Number(T a);
    Number();
    ~Number();
    Number &operator=(T &number);
    Number &operator=(const Number &that);
    Number operator-(const Number &that);
    Number &operator-=(const Number &that);
    Number operator+(const Number &that);
    Number &operator+=(const Number &that);
    Number operator*(const Number &that);
    Number &operator*=(const Number &that);
    Number operator/(const Number &that);
    Number operator^(const Number &that);
    bool operator>(const Number &that);
    bool operator>=(const Number &that);
    bool operator<(const Number &that);
    bool operator<=(const Number &that);
    bool operator!=(const Number &that);
    bool operator==(const Number &that);
    static T potenciaRecursiva(T base, T exponente);
    template<typename U>
    friend ostream &operator<<(ostream &out, Number<U> &c);

};

#endif //WORKSPACE_NUMBER_H
