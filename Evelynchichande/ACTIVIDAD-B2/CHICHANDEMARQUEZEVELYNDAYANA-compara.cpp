#include<iostream>
using namespace std;
int main() {
float a,b;
cout<<"Ingrese a:" ; cin>>a;
cout<<"Ingrese b:" ; cin>>b;
if(a==b){
cout<<"El valor de a="<<a<<":es igual a b="<<b<<endl;
	
}else{
if(a<b)	{ 
cout<<"El valor de a="<<a<<":ES MENOR A b="<<b<<endl;
}else{
cout<<"El valor de b="<<b<<":ES MENOR A a="<<a<<endl;	
} 
}	
return(0);	
}
