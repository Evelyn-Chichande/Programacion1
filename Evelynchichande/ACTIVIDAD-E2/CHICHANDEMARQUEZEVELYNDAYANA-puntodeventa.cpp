//==================================================
//==>Nombre del programa: punto de venta
//==>Autor: CHICHANDE MARQUEZ EVELYN DAYANA
//==> Archivo: CHICHANDEMARQUEZEVELYNDAYANA-puntodeventa.cpp
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-17
//==================================================
#include <iostream>
using namespace std;
int main ()
{
int CHE_c=0, CHE_P;
float CHE_A=0, CHE_x, CHE_Tb, CHE_Piva, CHE_Pdsc, CHE_iva=0.12, CHE_desc=0.10, CHE_vt;
cout<<"Ingrese la cantidad de productos: ";
cin>>CHE_P;
do{
cout<<"Ingrese el valor de los productos: ";
cin>>CHE_x;
CHE_c=CHE_c+1;
CHE_A=CHE_A+CHE_x;
CHE_Piva=CHE_A*CHE_iva;
cout<<"El valor del iva de la compra es de: $"<<CHE_Piva<<endl;
CHE_Pdsc=CHE_A*CHE_desc;
cout<<"El valor del descuento de su compra es de: $"<<CHE_Pdsc<<endl;
CHE_Tb=CHE_Piva+CHE_Pdsc;
}while (CHE_c<CHE_P);
if (CHE_Tb==CHE_A){
cout<<"Su compra aplica para un descuento:"<<CHE_Tb<<endl;
CHE_iva=CHE_Tb*CHE_Piva/100;
CHE_desc=CHE_Tb*CHE_Pdsc/100;
}else{
CHE_vt=CHE_A+CHE_Piva-CHE_Pdsc;
cout<<endl<<"//====================================================================="<<endl;
        cout<<"//=====Nombre del programa: punto de venta  "<<endl;
        cout<<"//=====Archivo: CHICHANDEMARQUEZEVELYNDAYANA-puntodeventa.cpp"<<endl;
        cout<<"//=====Autor: CHICHANDE MARQUEZ EVELYN "<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 17-05-2022"<<endl;
cout<<"//====================================================================="<<endl;

cout<<"El valor total es de: $"<<CHE_vt<<endl;
}
return(0);
}
