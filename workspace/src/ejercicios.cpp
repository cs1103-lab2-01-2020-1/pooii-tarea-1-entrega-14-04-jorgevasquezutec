//
// Created by Jorge Luis Vasquez on 14/04/2020.
//
#include "Tipos.h"
#include "clases/Interger.h"
#include "clases/Interger.cpp"
#include "clases/Number.h"
#include "clases/Number.cpp"




void ejercicio5a(){
    cout<<"Ejercicio 5a:"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    Interger a=6;
    Interger b=2;
    Interger h=a+b;
    cout<<"suma: "<<a<<"+"<<b<<"="<<h<<endl;
    Interger c=1;
    c +=b;
    cout<<"suma acumuladtiva: "<<c<<endl;
    cout<<"resta: "<<a-b<<endl;
    Interger d=3;
    d -=b;
    cout<<"resta acumuladtiva: "<<d<<endl;
    cout<<"Multiplicacion : "<<a*b<<endl;
    Interger e=5;
    e*=a;
    cout<<"Multiplicacion acumuladtiva: "<<e<<endl;
    cout<<"Divicion : "<<a/b<<endl;
    Interger f=0;
    Interger j=3;
    Interger k=4;
    f=j^k;
    cout<<"Potencia: "<<j<<"^"<<k<<"="<<f<<endl;
    cout<<">: "<<(a>b)<<endl;
    cout<<">=: "<<(a>=b)<<endl;
    cout<<"<: "<<(a<b)<<endl;
    cout<<"<=: "<<(a<b)<<endl;
    cout<<"!=: "<<(a!=b)<<endl;
    cout<<"==: "<<(a==b)<<endl;
    cout<<"-----------------------------------------------"<<endl;
}
void ejercicio5b(){
    cout<<"Ejercicio 5a:"<<endl;
    Number<float > a=3.5;
    Number<float > b=2.2;
    cout<<"suma: "<<a<<"+"<<b<<"="<<a+b<<endl;
    Number<float > c=1.1;
    c +=b;
    cout<<"suma acumuladtiva: "<<c<<endl;
    cout<<"resta: "<<a-b<<endl;
    Number<float > d=3.5;
    d -=b;
    cout<<"resta acumuladtiva: "<<d<<endl;
    cout<<"Multiplicacion : "<<a*b<<endl;
    Number<float > e=2.1;
    e*=a;
    cout<<"Multiplicacion acumuladtiva: "<<e<<endl;
    cout<<"Divicion : "<<a/b<<endl;
    Number<int > f=0;
    Number<int > j=3;
    Number<int > k=2;
    f=j^k;
    cout<<"Potencia: "<<j<<"^"<<k<<"="<<f<<endl;
    cout<<">: "<<(a>b)<<endl;
    cout<<">=: "<<(a>=b)<<endl;
    cout<<"<: "<<(a<b)<<endl;
    cout<<"<=: "<<(a<b)<<endl;
    cout<<"!=: "<<(a!=b)<<endl;
    cout<<"==: "<<(a==b)<<endl;
    cout<<"-----------------------------------------------"<<endl;
}
void ejercicio6(){

}
