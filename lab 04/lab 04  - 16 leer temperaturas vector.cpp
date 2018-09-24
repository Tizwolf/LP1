
//Leyendo algunas temperaturas en un vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<double> temps; 		//temperaturas
	double temp;
	while (cin>>temp)			//lee
		temps.push_back(temp);  //pone en el vector
	//...hacer algo
		
}

