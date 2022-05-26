//Trabajo de Chila Alisson



int ChilaAlissoncompara(){
int QE_num1, QE_num2;
	cout<<"ingresar el primer numero: "<<endl;
	cin>>QE_num1;
	cout<<"ingresar el segundo numero: "<<endl;
	cin>>QE_num2;
	if(QE_num1==QE_num2){
		cout<<"son iguales";
	}
	else if(QE_num1 < QE_num2){
		cout<<"El segundo numero es mayor";
	}
	else {
		cout<<"el primer numero es mayor";
	}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Compara"<<endl;
cout<<"//==> Archivo : ChilaAlisson-compara.pp"<<endl;
cout<<"//==>Autor: Chila Alisson"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}

int ChilaAlissonsumadevariosnumeros(){
	int QE_N,QE_i=0;
float QE_a,QE_S=0;
cout<<"ingrese el numero de veses que se va a sumar: ";
cin>>QE_N;
do{
cout<<"ingrese una cantidad"<<endl;
cin>>QE_a;
QE_i=QE_i+1;
QE_S=QE_S+QE_a;
}
while(QE_i<QE_N);
cout<<"la cantidad final es: "<<QE_S;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios numeros"<<endl;
cout<<"//==> Archivo : ChilaAlisson-sumadevariosnumeros.cpp"<<endl;
cout<<"//==>Autor: Chila Alisson"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
}

int ChilaAlissonpuntodeventa(){
	int QE_i=0,QE_p;
	float QE_vp, QE_a=0, QE_vb, QE_vIVA, QE_vdes, QE_vf, QE_IVA=0.12, QE_des=0.10;
        cout<<"cual es la cantidad de los productos : "<<endl;
	cin>>QE_p;
	do{
	cout<<"Ingrede el valor de cada producto : "<<endl;
        cin>>QE_vp;
	QE_i=QE_i+1;
	QE_a=QE_a+QE_vp;
	}while(QE_i<QE_p);{
		QE_vb=QE_a;
	cout<<"El valor bruto es : "<<QE_vb<<endl;
		QE_vIVA=QE_vb*QE_IVA;
	cout<<"El valor del IVA es : "<<QE_vIVA<<endl;
		QE_vdes=QE_vb*QE_des;
	cout<<"El valor del descuento es : "<<QE_vdes<<endl;
		QE_vf=QE_vb+QE_vIVA-QE_vdes;
	cout<<"El valor final es : "<<QE_vf<<endl;
	}

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
cout<<"//==> Archivo : ChilaAlisson-puntodeventa.cpp"<<endl;
cout<<"//==>Autor: Chila Alisson"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}


int ChilaAlissonedad(){
int QE_aa,QE_ma,QE_da,QE_an,QE_mn,QE_dn,QE_a,QE_m,QE_d;
	cout<<"ingrese el año actual: "<<endl; cin>>QE_aa;
	cout<<"ingrese el mes actual: "<<endl; cin>>QE_ma;
	cout<<"ingrese el dia actual: "<<endl; cin>>QE_da;
	cout<<endl;
	cout<<"ingrese el año de nacimiento: "<<endl; cin>>QE_an;
	cout<<"ingrese el mes de nacimiento: "<<endl; cin>>QE_mn;
	cout<<"ingrese el dia de nacimiento: "<<endl; cin>>QE_dn;
	if(QE_da>=QE_dn){
		QE_d=QE_da-QE_dn;
		}
	else{
		QE_ma=QE_ma-1;
		QE_da=QE_da+30;
		QE_d=QE_da-QE_dn;
	}
	if(QE_ma>=QE_mn){
		QE_m=QE_ma-QE_mn;
	}
	else{
		QE_aa=QE_aa-1;
		QE_ma=QE_ma+12;

		QE_m=QE_ma-QE_mn;
	}
	QE_a=QE_aa-QE_an;
	cout<<endl;
	cout<<"tu edead actual es:"<<endl;
	cout<<QE_a<<" años"<<endl;
	cout<<QE_m<<" meses"<<endl;
	cout<<QE_d<<" dias"<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: la edad"<<endl;
cout<<"//==> Archivo : ChilaAlisson-edad.cpp"<<endl;
cout<<"//==>Autor: Chila Alisson"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
	return 0;

}


int ChilaAlissoncuentamoneda(){
int QE_n, QE_c, QE_c1, QE_c2, QE_cl, QE_cz;
	float QE_x, QE_al, QE_a, QE_a1, QE_a2, QE_az;
	QE_c = 0;
	QE_c1 = 0;
	QE_c2 = 0;
	QE_a = 0;
	QE_a1 = 0;
	QE_a2 = 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>QE_n;
	do
	{

		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>QE_x;
		QE_c = QE_c+1;
		QE_a = QE_a+QE_x;
		if(QE_x==0.25)
		{
			QE_c1 = QE_c1+1;
			QE_a1 = QE_x+QE_a1;
		}
		else
			{
				QE_c2 = QE_c2+1;
				QE_a2 = QE_a2+QE_x;
			}
   }
	while(QE_c<QE_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<QE_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<QE_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<QE_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<QE_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<QE_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<QE_a1<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo : ChilaAlissoncuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Chila Alisson"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
	
}

int ChilaAlissonmenu(){


	int op,flag2;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE Chila Alisson**************"<<endl<<endl;
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
					 ChilaAlissonsumadevariosnumeros();			
					break;
				case 2:
					system("clear");
					cout<<"\nCOMPARA 2 NUMEROS ";
					ChilaAlissoncompara();
					break;
				case 3:
				system("clear");
					cout<<"\n PUNTO DE VENTA ";
					ChilaAlissonpuntodeventa();
					break;
				case 4:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
				        ChilaAlissonedad();
					break;
				case 5:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDAS ";
					ChilaAlissoncuentamoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				                       flag2=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);
	
	cout<<"=========================================\n";
	cout<<"                 Chila Alisson              \n";
	cout<<" Gmail: alisson.chila.quinonez@utelvt.edu.ec \n";
        cout<<"=========================================\n";

	return(0);

}
