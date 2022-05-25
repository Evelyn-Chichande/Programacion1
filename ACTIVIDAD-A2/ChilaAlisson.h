//Trabajo de ApellidoNombre



int ApellidoNombreSumaN(){



int ApellidoNombreCompara(){

	
}

int ApellidoNombrePuntoVenta(){

}


int ApellidoNombrelaedad(){

	
}


int ApellidoNombreCuentaMoneda(){

	
}

int ApellidoNombremenu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE ApellidoNombre**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					//TRABAJO DEL INTEGRANTE 1.
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 ApellidoNombreSumaN();			
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
					cout<<"\nCOMPARA 2 NUIMEROS ";
					ApellidoNombreCompara();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n PUNTO DE VENTA ";
					ApellidoNombrePuntoVenta();
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n CALCULA LA EDAD ";
					ApellidoNombrelaedad();
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					ApellidoNombreCuentaMoneda();
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	

	return(0);

}
