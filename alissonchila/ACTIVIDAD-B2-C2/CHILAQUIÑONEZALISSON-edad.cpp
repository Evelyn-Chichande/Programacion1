//==================================================
//==>Nombre del programa: edad
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: CHILAQUIÑONEZALISSON-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================
#include<iostream>
using namespace std;

int main ()
{
	int QE_AA,QE_MA,QE_DA,QE_AN,QE_MN,QE_DN,QE_A,QE_M,QE_D;
	cout<<"Ingrese la fecha actual (AAAA MM DD): ";
	cin>>QE_AA>>QE_MA>>QE_DA;
	cout<<"Ingrese su fecha de nacimiento (AAAA MM DD): ";
	cin>>QE_AN>>QE_MN>>QE_DN;
	if(QE_DA>=QE_DN){
	QE_D=QE_DA-QE_DN;
	}else{
	QE_DN=QE_DN+30;
	QE_MA=QE_MA-1;
	QE_D=QE_DA-QE_DN;
	}
	if(QE_MA>=QE_MN){
	QE_M=QE_MA-QE_MN;
	}else{
	
	QE_MN=QE_MN+12;
	QE_AA=QE_AA-1;
	QE_M=QE_MA-QE_MN;
	}
	QE_A=QE_AA-QE_AN;
//==================================================
//==>Nombre del programa: edad
//==>Autor: CHILA QUIÑONEZ ALISSON ELENA
//==> Archivo: CHILAQUIÑONEZALISSON-edad.cpp
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//==================================================

	cout<<"Usted tiene "<<QE_A<<" años "<<QE_M<<" meses  y"<<QE_D<<" dias ";


	return(0);
}
