//==================================================
//==>Nombre del programa: sumadevariosnumeros
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: CHILAQUIÑONEZALISSON-sumadevariosnumeros.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================

#include <iostream>

using namespace std;

int main()
{
    int QE_c=0, QE_n;
    float QE_s=0, QE_x;
    cout<<"Ingrese la cantidad de números a sumar:";
    cin>>QE_n;
    do{
  
    cout<<"Ingrese un número:";
    cin>>QE_x;
    QE_c=QE_c+1;
    QE_s=QE_s+QE_x;
       } while(QE_c<QE_n);
//==================================================
//==>Nombre del programa: sumadevariosnumeros
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: CHILAQUIÑONEZALISSON-sumadevariosnumeros.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================

            cout<<"Ingrese un numero para sumarlo: "<<QE_s<<endl;
        
        return(0);
}
