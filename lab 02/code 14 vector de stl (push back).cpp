
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<double> v;     //v no tiene elementos
	
	v.push_back(2.7);     //inserta 2.7 al final de v 
	//v ahora tiene 1 elemento v[0]==2.7
	v.push_back(5.6);     //inserta 5.6 al final de v 
	//v ahora tiene 2 elementos v[1]==5.6
	v.push_back(7.9);     //inserta 7.9 al final de v
	//v ahora tiene 3 elementos v[2]==7.9	
	for(int i=0; i<v.size(); ++i)
		cout<<"v["<<i<<"]=="<<v[i]<<'\n';
	
}
