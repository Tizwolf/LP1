
//Calcular area
#include <iostream>
using namespace std;

int main()
{
 	int length = 20; //literal del tipo entero
 	int width = 40; //inicializa
 	int area = length*width; // una multiplicacion
 	
 	length = 99; //asigna 99 a lenght
 	
 	{
 		int perimeter = (length+width)*2; //suma luego multiplica
	 }
 	{
		int perimeter = length*2+width*2;
 	}
 	
 	{
 		int perimeter = length+width/2; //suma width*2 a length
	 }
	
}
