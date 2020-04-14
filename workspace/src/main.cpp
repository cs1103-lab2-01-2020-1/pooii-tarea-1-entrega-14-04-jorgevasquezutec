#include "Tipos.h"
#include "clases/Interger.h"
#include "clases/Interger.cpp"
#include "clases/Number.h"
#include "clases/Number.cpp"

int main() {
    Interger a=6;
    Interger b=2;
    cout<<"suma: "<<(a+b)<<endl;
    cout<<"suma acumuladtiva: "<<(a+=b)<<endl;
    //aqui a vale 8
    cout<<"resta: "<<(a-b)<<endl;
    cout<<"resta acumuladtiva: "<<(a-=b)<<endl;
    //aqui a vale 6
    cout<<"Multiplicacion : "<<(a*b)<<endl;
    cout<<"Multiplicacion acumuladtiva: "<<(a*=b)<<endl;
    //aqui a vale 12
    cout<<"Divicion : "<<(a/b)<<endl;
    cout<<"Potencia: "<<(a^b)<<endl;
    cout<<">: "<<(a>b)<<endl;
    cout<<">=: "<<(a>=b)<<endl;
    cout<<"<: "<<(a<b)<<endl;
    cout<<"<=: "<<(a<b)<<endl;
    cout<<"!=: "<<(a!=b)<<endl;
    cout<<"==: "<<(a==b)<<endl;
    return 0;
}