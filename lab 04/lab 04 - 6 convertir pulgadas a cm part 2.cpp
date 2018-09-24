

//Convertir de pulgadas (in) a cm y viceversa
//sufijos 'i' o 'c' indican la unidad
//cualquier otro es error
#include <iostream>
using namespace std;

int main()
{
	//(*)
	if (unit == 'i')
		cout<<length<< "in == "<<cm_per_inch*length<<"cm\";
	else if(unit == 'c')
		cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
	else 
		cout<<"Lo siento, no conosco una unidad llamada '"<<unit<<"'\n";
		

}
