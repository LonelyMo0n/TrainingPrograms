/*Escribe un programa que lea dos numeros y determine cual 
de ellos es el mayor*/

#include<iostream>
using namespace std;

int main(){
	float a, b, c;
	
	cout<<"Digite tres numeros: ";
	cin>>a>>b>>c;
	
	if(a==b && a==c){
		cout<<"Los tres numeros son iguales"<<endl;
	}
	else if(a>b && a>c){
		cout<<"El mayor es: "<<a;
	}
	else if(b>a && b>c){
		
		cout<<"El mayor es: "<<b;
	}
	else{
		cout<<"El mayor es: "<<c;
	}
	
	return 0;
}
