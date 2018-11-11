
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <stdexcept>
#include "CLASEANIME.h"

using namespace std;

Anime::Anime(string _nombre,string _autor, string _genero, string _formato, int _anho){
  if(_nombre=="0"){
    _nombre="Desconocido";
  }
  if(_autor=="0"){
    _autor="Desconocido";
  }
  if(busqud(_genero)!="existe"){
    throw runtime_error("No conosco dicho genero");
  } //crear funcion genero encargado de verificar la veracidad del genero
  if(busqud(_formato)!="existe"){
    throw runtime_error("No conosco dicho formato");
  }
  if(_anho<1917 || _anho>2018 ){
    throw runtime_error("Anho de publicacion invalida");
  }
  nombre=_nombre;
  autor=_autor;
  genero=_genero;
  formato=_formato;
  anho=_anho;
}


int main()
try{
string nombre,autor,genero,formato;
int anho=0;
cout<<"Escriba en orden: el nombre, autor, genero, formato y anho"<<endl;
cin>>nombre>>autor>>genero>>formato>>anho;
Anime p1(nombre,autor,genero,formato,anho);

cout<<"El nombre es: "<<p1.a()<<"\n";
cout<<"El autor es: "<<p1.b()<<"\n";
cout<<"El genero es: "<<p1.c()<<"\n";
cout<<"El formato es: "<<p1.d()<<"\n";
cout<<"El anho es: "<<p1.e()<<"\n";


}
catch(exception & e){
  cout<<"Error: "<<e.what()<<"\n";
  return 1;
}
