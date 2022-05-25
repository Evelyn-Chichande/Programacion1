// MENU DE Chichande Evelyn
//
//
//
//
//
//
//


int ChichandeEvelynsumadevariosnumeros(){
int CHE_cc=0,CHE_c;
	float CHE_n,CHE_st=0;
	
	cout<<"Ingrese la cantidad de numero que desea sumar: ";
	cin>>CHE_c;
	
	do{

	cout<<"Ingrese los numeros ";
	cin>>CHE_n;
	CHE_cc=CHE_cc+1;
	CHE_st=CHE_st+CHE_n;
	
	}while(CHE_cc<CHE_c);
	
	cout<< "El resultado de la suma total es: "<< CHE_st <<endl;
	
	cout<<endl<<"//================================================"<<endl;
    cout<<"//==> Nombre del programa: Calcular la suma de dos numeros"<<endl;
    cout<<"//==> Archivo : ChihandeEvelyn-sumadevariosnumeros.cpp"<<endl;
    cout<<"//==>Autor: Chichande Evelyn"<<endl;
    cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
    cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
    cout<<"//================================================="<<endl;

	return 0;
}

int ChichandeEvelyncompara(){
float CHE_N1, CHE_N2;

cout<<"Ingrese  N1:" ; 
cin>>CHE_N1;

cout<<"Ingrese N2: " ; 
cin>>CHE_N2;

if(CHE_N1==CHE_N2){
	
cout<< " el valor de N1="<<CHE_N1<<":es igual a N2="<<CHE_N2<<endl;
}else{

if(CHE_N1<CHE_N2) 
{
	cout<< " El valor de N1="<<CHE_N1<<": ES MENOR A N2="<<CHE_N2<<endl;

}else{ 
	cout<<"El valor de N2="<<CHE_N2<<":ES MENOR A N1="<<CHE_N1<<endl;
}
}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos números"<<endl;
cout<<"//==> Archivo : ChichandeEvelyn-compara.cpp"<<endl;
cout<<"//==>Autor: Chichande Evelyn"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

return(0);
	
	
}

int ChichandeEvelynpuntodeventa(){
int CHE_c=0,CHE_cp;
	float CHE_vp, CHE_a=0, CHE_vb, CHE_vIVA, CHE_vdes, CHE_vf, CHE_IVA=0.12, CHE_des=0.10;
        cout<<"Ingrese la cantidad de productos : "<<endl;
	cin>>CHE_cp;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>CHE_vp;
	CHE_c=CHE_c+1;
	CHE_a=CHE_a+CHE_vp;
	}while(CHE_c<CHE_cp);{
		CHE_vb=CHE_a;
	cout<<"El valor bruto es : "<<CHE_vb<<endl;
		CHE_vIVA=CHE_vb*CHE_IVA;
	cout<<"El valor del IVA es : "<<CHE_vIVA<<endl;
		CHE_vdes=CHE_vb*CHE_des;
	cout<<"El valor del descuento es : "<<CHE_vdes<<endl;
		CHE_vf=CHE_vb+CHE_vIVA-CHE_vdes;
	cout<<"El valor final a pagar es : "<<CHE_vf<<endl;
	}
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : ChichandeEvelyn-puntodeventa.cpp"<<endl;
cout<<"//==>Autor: Chichande Evelym"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}


int ChichandeEvelynedad(){
int CHE_aa,CHE_ma,CHE_da,CHE_an,CHE_mn,CHE_dn,CHE_a,CHE_m,CHE_d;


cout<<"Ingrese la fecha actual (aaaa/mm/dd): "; 
cin>>CHE_aa>>CHE_ma>>CHE_da;

cout<<"Ingrese la fecha de nacimiento (aaaa/mm/dd): "; 
cin>>CHE_an>>CHE_mn>>CHE_dn;

if(CHE_da>CHE_dn)
{
	CHE_d=CHE_da-CHE_dn;
	
}else{

	CHE_da=CHE_da+30;
	CHE_ma=CHE_ma-1;
	CHE_d=CHE_da-CHE_dn;
}
if(CHE_ma>CHE_mn){
	
	CHE_m=CHE_ma-CHE_mn;
	
}else{
	
	CHE_mn=CHE_mn+12;
	CHE_aa=CHE_aa-1;
	CHE_m=CHE_ma-CHE_mn;
}

CHE_a=CHE_aa-CHE_an;


cout<<"La persona tiene :"<<CHE_a<<" años "<<CHE_m<< " meses "<<CHE_d<< " dias "<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcular la edad de una persona"<<endl;
cout<<"//==> Archivo : ChichandeEvelyn-edad.cpp"<<endl;
cout<<"//==>Autor: Chichande Evelyn "<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;
cout<<"//================================================="<<endl;

return 0;	
	
}


int ChichandeEvelyncuentamoneda(){
int CHE_cm, CHE_c=0, CHE_c1=0, CHE_c2=0;
  float CHE_vm, CHE_a=0, CHE_a1=0, CHE_a2=0, CHE_cstn=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>CHE_cm;
	do{
		cout<<"Ingrese el valor de la moneda (0.10, o.25) : ";
		cin>>CHE_vm;
		CHE_c=CHE_c+1;
		CHE_a=CHE_a+CHE_vm;
		if(CHE_vm==CHE_cstn){
			CHE_c1=CHE_c1+1;
			CHE_a1=CHE_a1+CHE_vm;
		}else{
			CHE_c2=CHE_c2+1;
			CHE_a2=CHE_a2+CHE_vm;
		}
	}while(CHE_c<CHE_cm);
cout<<"El resultado fue : "<<endl;
cout<<"Cantidad de monedad ingresadas : "<<CHE_c<<endl;
cout<<"Cantidad total de dinero ingresado : "<<CHE_a<<endl;
cout<<"Cantidad de monedas de 0.10c ingresadas : "<<CHE_c1<<endl;
cout<<"Cantidad total de dinero en monedas de 0.10c : "<<CHE_a1<<endl;
cout<<"Cantidad de monedas de 0.25c ingresadas : "<<CHE_c2<<endl;
cout<<"Cantidad total de dinero en monedas de 0.25c : "<<CHE_a2<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
cout<<"//==> Archivo : ChcichandeEvelyncuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Chichande Evelyn"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-30"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int ChichandeEvelynmenu()
{
	int op,flag3;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Chichande Evelyn**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 ChichandeEvelynsumadevariosnumeros();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUMEROS ";
					ChichandeEvelyncompara();
					break;
				case 3:
					system("clear");
					cout<<"\n PUNTO DE VENTA ";
					ChichandeEvelynpuntodeventa();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					ChichandeEvelynedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDAS ";
					ChichandeEvelyncuentamoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				        flag3=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);

        cout<<"=============================================\n";
        cout<<"             Chichande Evelyn                \n";
         cout<<" Gmail:evelyn.chichande.marquez@utelvt.edu.ec\n";
        cout<<"=============================================\n";	

	return(0);

}
