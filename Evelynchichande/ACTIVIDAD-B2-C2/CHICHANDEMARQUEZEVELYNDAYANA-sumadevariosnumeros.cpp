//==================================================
//==>Nombre del programa: suma de varios números
//==>Autor: CORTEZ TORRES JEAN PIERRE
//==> Archivo: CHICHANDEMARQUEZEVELYN-sumadevariosnúmeros.cpp
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-17
//==================================================
#include <iostream>

using namespace std;

int main()
{
    int CHE_c=0, CHE_n;
    float CHE_s=0, CHE_x;
    cout<<"Ingrese la cantidad de números a sumar:";
    cin>>CHE_n;
    do{
  
    cout<<"Ingrese un número:";
    cin>>CHE_x;
    CHE_c=CHE_c+1;
 CHE_s=CHE_s+CHE_x;
       } while(CHE_c<CHE_n);

        cout<<"//=====Nombre del programa: suma de varios números "<<endl;
        cout<<"//=====Archivo: CHICHANDEMARQUEZEVELYNDAYANA-edad.cpp"<<endl;
        cout<<"//=====Autor: CHICHANDE MARQUEZ EVELYN "<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 17-05-2022"<<endl;

            cout<<"Ingrese un número para sumarlo: "<< CHE_s<<endl;
        
        return(0);
}
