//==================================================
//==>Nombre del programa: punto de venta
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: CHILAQUIÑONEZALISSON-puntodeventa.cpp
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-18
//==================================================


#include <iostream>
using namespace std;
int main ()
{
int QE_c=0, QE_P;
float QE_A=0, QE_x, QE_Tb, QE_Piva, QE_Pdsc, QE_iva=0.12,QE_desc=0.30, QE_vt;
cout<<"Ingrese la cantidad de productos: ";
cin>>QE_P;
do{
cout<<"Ingrese el valor de los productos: ";
cin>>QE_x;
QE_c=QE_c+1;
QE_A=QE_A+QE_x;
QE_Piva=QE_A*QE_iva;
cout<<"El valor del iva de la compra es de: $"<<QE_Piva<<endl;
QE_Pdsc=QE_A*QE_desc;
cout<<"El valor del descuento de su compra es de: $"<<QE_Pdsc<<endl;
QE_Tb=QE_Piva+QE_Pdsc;
}while (QE_c<QE_P);
if (QE_Tb==QE_A){
cout<<"Su compra aplica para un descuento:"<<QE_Tb<<endl;
QE_iva=QE_Tb*QE_Piva/100;
QE_desc=QE_Tb*QE_Pdsc/100;
}else{
QE_vt=QE_A+QE_Piva-QE_Pdsc;



cout<<endl<<"//====================================================================="<<endl;
        cout<<"//=====Nombre del programa: punto de venta  "<<endl;
        cout<<"//=====Archivo: CHILAQUIÑONEZALISSON-puntodeventa.cpp"<<endl;
        cout<<"//=====Autor: CHILA QUIÑONEZ ALISSON ELENA"<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
	cout<<"//=====Fecha de ultima actualización: 18-05-2022"<<endl;
cout<<"//====================================================================="<<endl;







cout<<"El valor total es de: $"<<QE_vt<<endl;

}
return(0);
}

