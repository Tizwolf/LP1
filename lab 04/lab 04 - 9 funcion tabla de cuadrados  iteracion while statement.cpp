
//Calcula e imprime la tabla de cuadrados de 0 a 99
//retorna el cuadrado de x

#include <iostream>
using namespace std;

int square (int x)
{
	return x*x;
	
}

int main()
{
	int i=0; //empieza en cero
	while (i<100){
		cout<<i<<'\t'<<square(i)<<'\n';++i;//incremento
				
	}
		
}
