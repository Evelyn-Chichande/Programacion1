#include <iostream>
using namespace std;
int main ()
{
int c=0, P;
float A=0, x, Tb, Piva, Pdsc, iva=0.12, desc=0.10, vt;
cout<<"Ingrese la cantidad de productos: ";
cin>>P;
do{
cout<<"Ingrese el valor de los productos: ";
cin>>x;
c=c+1;
A=A+x;
Piva=A*iva;
cout<<"El valor del iva de la compra es de: $"<<Piva<<endl;
Pdsc=A*desc;
cout<<"El valor del descuento de su compra es de: $"<<Pdsc<<endl;
Tb=Piva+Pdsc;
}while (c<P);
if (Tb==A){
cout<<"Su compra aplica para un descuento:"<<Tb<<endl;
iva=Tb*Piva/100;
desc=Tb*Pdsc/100;
}else{
vt=A+Piva-Pdsc;
cout<<"El valor total es de: $"<<vt<<endl;
}
return(0);
}