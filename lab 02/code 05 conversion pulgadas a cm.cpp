

//Convertir de pulgadas (in) a cm y viceversa
//sufijos 'i' o 'c' indican la unidad
//cualquier otro es error
#include <iostream>
using namespace std;

int main()
{
	const double cm_per_inch = 2.54;//numero de cm en un 
	int length = 1; //longitud
	char unit = " "; // espacio (no es unidad)
	cout<<"Por favor ingrese una longitud seguida de su unidad (c o i): \n";
	cin <<length >unit;
	//(*)
	if (unit == 'i')
		cout<<length<< "in == "<<cm_per_inch*length<<"cm\";
	else if(unit == 'c')
		cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
	else 
		cout<<"Lo siento, no conosco una unidad llamada '"<<unit<<"'\n";
	
}
