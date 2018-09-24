
//Calcula e imprime la tabla de cuadrados de 0 a 99
//retorna el cuadrado de x
using namespace std;

int square(int x)
{
	return x*x;
}

int main ()
{
	for (int i = 0; i<100; ++i) {
		//para i en el rango de (0:100)
		cout<<i<<'\t'<<square(i)<<'\n';
		//+i;//huele a error!
		
	}
		
}
