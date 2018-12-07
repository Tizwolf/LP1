
#include<iostream>
#include<string>
#include<vector>
#include<stdexcept>


using namespace std;

class Anime{
	  public:
	    enum Geners{
	      Gore,Spokon,Romakone,Meitantei,Mecha,Shojo,MahoShojo,Gekiga,MagicalGirlfriend,Josei,Kemono,Kodomo,Cyberpunk,Shonen,Seinen,Sentai,comedia,Postapocaliptico
	    }; 
	    enum Formats{
	      serie,OVA,pelicula,manga
	    };
	
	    Anime(string _nombre,string _autor,vector<Geners>& alm_gen,Formats _formato, int _anho);
	
	
	    //  Operaciones que no se modificaran
	    string a() const {return nombre;}
	    string b() const {return autor;}
	    Geners c() const {return genero[0];}
	    Formats d() const {return formato;}
	    int e()    const {return anho;}
		//void c()  { alm_gen[0]=genero[0];  alm_gen[1]=genero[1];}
	  private:
	    string  nombre,autor;
	    int     anho;
	    Formats formato;
	    vector<Geners> genero;

};
