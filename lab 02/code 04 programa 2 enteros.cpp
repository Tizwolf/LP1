#include <iostream>
using namespace std;
int main()
{	
cout<<"Ingrese dos numeros enteros"<<endl;

int a;
int b;
int mayor;
int menor;
//double c = a;

cin>>a>>b;
cout<<"La suma de los dos numeros: "<<a+b<<endl;
cout<<"La division de los dos nuneros: "<<a/b<<endl; //sin decimales
cout<<"La multiplicacion de los dos numeros: "<<a*b<<endl;

if (a>b){

	mayor = a;
	menor = b;

}
else 
	mayor = b;
	menor = a;
cout<<"El mayor es: "<<mayor<<endl;
cout<<"El menor es: "<<menor<<endl;
	
	
}
