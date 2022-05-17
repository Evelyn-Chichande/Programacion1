//==>Nombre del programa: edad
//==>Autor: CHICHANDE MARQUEZ EVELYN DAYANA
//==> Archivo: CHICHANDEMARQUEZEVELYNDAYANA-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12


#include<iostream>
using namespace std;

int main ()
{
	int CHE_AA,CHE_MA,CHE_DA,CHE_AN,CHE_MN,CHE_DN,CHE_A,CHE_M,CHE_D;
	cout<<"Ingrese la fecha actual (AAAA MM DD): ";
	cin>>CHE_AA>>CHE_MA>>CHE_DA;
	cout<<"Ingrese su fecha de nacimiento (AAAA MM DD): ";
	cin>>CHE_AN>>CHE_MN>>CHE_DN;
	if(CHE_DA>=CHE_DN){
	CHE_D=CHE_DA-CHE_DN;
	}else{
	CHE_DN=CHE_DN+30;
	CHE_MA=CHE_MA-1;
	CHE_D=CHE_DA-CHE_DN;
	}
	if(CHE_MA>=CHE_MN){
	CHE_M=CHE_MA-CHE_MN;
	}else{
	CHE_MN=CHE_MN+12;
	CHE_AA=CHE_AA-1;
	CHE_M=CHE_MA-CHE_MN;
	}
	CHE_A=CHE_AA-CHE_AN;

//==>Nombre del programa: edad
//==>Autor: CHICHANDE MARQUEZ EVELYN DAYANA
//==> Archivo: CHICHANDEMARQUEZEVELYNDAYANA-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12





	cout<<"Usted tiene "<<CHE_A<<" años "<<CHE_M<<" meses  y"<<CHE_D<<" dias ";
	return(0);
}
