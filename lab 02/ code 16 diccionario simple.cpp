
//Diccionario simple
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
	vector<string>words;
	string temp;
	while (cin>>temp)   // leer palabras separas por " " poner en el vector
		words.push_back(temp);   //poner en el vetor
	cout<<"Numero de palabras: "<<words.size()<<endl;
	
	//ordenar de inicio a fin
	sort(words.begin(),words.end());
	
	for (int i=0; i <words.size();++i)
		//es una palabra nueva?
		if (i==0 || words[i-1]!=words[i])
			cout<<words[i]<<"\n";
	

}
