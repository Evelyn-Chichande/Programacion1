//==================================================
//==>Nombre del programa: cuentamoneda
//==>Autor: CHICHANDE MARQUEZ EVELYN DAYANA
//==> Archivo: CHICHANDEMARQUEZEVELYNDAYANA-cuentamoneda.cpp
//==>Fecha de elaboración: 2022-04-30
//==>Fecha ultima actualización: 2022-05-17
//==================================================
#include<iostream>
using namespace std;

int main()
{
	int CHE_n, CHE_c=0, CHE_c1=0, CHE_c2=0;
	float CHE_x, CHE_a=0, CHE_a1=0, CHE_a2=0, CHE_m=0.10;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>CHE_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>CHE_x;
        CHE_c=CHE_c+1;
	CHE_a=CHE_a+CHE_x;
	if(CHE_x==CHE_m){
		CHE_c1=CHE_c1+1;
		CHE_a1=CHE_a1+CHE_x;
	}else{
                CHE_c2=CHE_c2+1;
		CHE_a2=CHE_a2+CHE_x;
	}
	}while(CHE_c<CHE_n);
        
	
	cout<<"//=====Nombre del programa: cuenta moneda  "<<endl;
        cout<<"//=====Archivo: CHICHANDEMARQUEZEVELYN-cuentamoneda.cpp"<<endl;
        cout<<"//=====Autor: CHICHANDE MARQUEZ EVELYN "<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 17-05-2022"<<endl;
	
	
	
	
	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<CHE_c<<endl;
	cout<<"El total del dinero contado es de : "<<CHE_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<CHE_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<CHE_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<CHE_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<CHE_a2<<endl;

	return (0);
}
