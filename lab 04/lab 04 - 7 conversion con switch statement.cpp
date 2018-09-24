
//COn switch statement
#include <iostream>
using namespace std;

int main()
{
	const double cm_per_inch = 2.54; //#cm por pulgada unidad de longitud
	int length = 1;
	char unit = 'a';
	cout<<"Por favor ingrese una longitud (c o i):\n";
	cin>>length>>unit;
	
	switch (unit)  {
		case 'i':
			cout<<length<<"in == "<<cm_per_inch*length <<"cm\n";
			break;
		case 'c':
			cout<<length<<"cm == "<<length/cm_per_inch<<"in\n";
			break;
		default:
			cout<<"Lo siento no conosco esa unidad '"<<unit<<"'\n";
			break;
			
		
		
	}
}
