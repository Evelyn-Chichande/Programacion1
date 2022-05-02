#include <iostream>

using namespace std;

int main()
{
 	int n1, n2;
	cout<<"\nEste programa compara dos numeros entre si."<<endl;
	cout<<"\nIngrese el primer numero:"; cin>>n1;
	cout<<"\nIngrese el segundo numero:"; cin>>n2;
    if(n1>n2) {
        cout<<"\n El numero mayo es "<<n1;
    }   
   else{
        if (n2>n1){
            cout<<"\n El numero mayor es "<<n2;
        }
        else{
            cout<<"\nLos numeros son iguales.";
        }
    }
   
    
    
return 0;
}

