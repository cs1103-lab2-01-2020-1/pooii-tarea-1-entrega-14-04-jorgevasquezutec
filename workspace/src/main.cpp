#include "Tipos.h"
#include "clases/Interger.h"
#include "clases/Interger.cpp"

int main() {
    Interger a=6;
    Interger b=2;
    cout<<"suma: "<<(a+b)<<endl;
    cout<<"suma acumuladtiva: "<<(a+=b)<<endl;
    cout<<"resta: "<<(a-b)<<endl;
    cout<<"resta acumuladtiva: "<<(a-=b)<<endl;
    cout<<"Multiplicacion : "<<(a*b)<<endl;
    cout<<"Multiplicacion acumuladtiva: "<<(a*=b)<<endl;
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