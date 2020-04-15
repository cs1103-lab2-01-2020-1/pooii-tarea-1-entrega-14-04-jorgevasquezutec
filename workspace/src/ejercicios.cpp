//
// Created by Jorge Luis Vasquez on 14/04/2020.
//
#include "Tipos.h"
#include "clases/Interger.h"
#include "clases/Interger.cpp"
#include "clases/Number.h"
#include "clases/Number.cpp"
#include "clases/vector.h"
#include "clases/vector.cpp"


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

    cout<<"Ejercicio 6:"<<endl;
    utec::vector prueba(5);
    utec::vector prueba2(3);
    utec::vector resultado1;
    utec::vector resultado2;

    for (size_t i=0 ; i<5;i++){
        prueba.push_back(i);
    }
    for(size_t i=0; i<3;i++){
        prueba2.push_back(i);
    }
    //asignacion
    resultado1=prueba2;
    prueba.erase(1);
    prueba.insert(2,9);
    prueba.print();
    resultado1.print();
    resultado2 = prueba+resultado1;
    resultado2.print();

    cout<<"-----------------------------------------------"<<endl;
}
