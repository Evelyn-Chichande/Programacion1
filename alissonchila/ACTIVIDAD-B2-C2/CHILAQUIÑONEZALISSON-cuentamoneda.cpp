//================================= ==
// ==>Nombre del programa:cuentamoneda
// ==>Autor:Chila Quiñonez Alisson
// ==>Archivo: CHILAQUIÑONEZALISSON-cuentamoneda.cpp
// ==>Fecha de elaboración: 2022-04-30
// ==>Fecha Última actualización: 2022-05-18
// ================================ ==
#include<iostream>
using namespace std;

int main()
{
	int QE_n, QE_c=0, QE_c1=0, QE_c2=0;
	float QE_x, QE_a=0, QE_a2=0, QE_m=0.10,QE_a1=0;
	cout<<"Ingrese la cantida de monedas: ";
	cin>>QE_n;
	do{
	cout<<"Ingrese cual es el valor de la moneda (0.10,0.25) : ";
	cin>>QE_x;
	QE_c=QE_c+1;
	QE_a=QE_a+QE_x;
	if(QE_x==QE_m){
		QE_c1=QE_c1+1;
		QE_a1=QE_a1+QE_x;
	}else{
		QE_c2=QE_c2+1;
		QE_a2=QE_a2+QE_x;
	}
	}while(QE_c<QE_n);

cout<<endl<<"//====================================================================="<<endl;
	cout<<"//=====Nombre del programa: cuenta moneda "<<endl;
        cout<<"//=====Archivo: CHILAQUIÑONEZALISSON-cuentamoneda.cpp"<<endl;
        cout<<"//=====Autor: CHILA QUIÑONEZ ALISSON"<<endl;
        cout<<"//=====Fecha de elaboración: 30-04-2022"<<endl;
        cout<<"//=====Fecha de ultima actualización: 18-05-2022"<<endl;
cout<<"//====================================================================="<<endl;


	cout<<"El total de monedas fue : "<<endl;
	cout<<"Cantidad de monedas ingresadas : "<<QE_c<<endl;
	cout<<"El total del dinero contado es de : "<<QE_a<<endl;
	cout<<"Monedas ingresadas de 0.10 ctvos es de :"<<QE_c1<<endl;
	cout<<"Cantidad total de monedas de 0.10 ctvos es de : "<<QE_a1<<endl;
	cout<<"Monedas ingresadas de 0.25 ctvos es de : "<<QE_c2<<endl;
	cout<<"Cantidad total de monedas de 0.25 ctvos es de : "<<QE_a2<<endl;
	return (0);
}
