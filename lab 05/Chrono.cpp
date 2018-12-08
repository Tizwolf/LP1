//CHRONO.cpp (1) , (2),y (3) 
//Code 11

#include "Chrono.h"
#include <iostream>
#include <stdexcept>

using namespace std;

namespace Chrono {
	
	//definiciones de las funciones miembro
	
	Date::Date(int yy, Month mm, int dd)
			:y(yy), m(mm), d(dd)
	{
		if(!is_date(yy, mm, dd)) 
			throw Invalid();
	}
	
	const Date& default_date() 	 	//funcion supongo donde está default_date, la referencia de Date hacia la clase?
	{
		
		static const Date dd(2001, Date::jan, 1);   //por que Date "dd" 2001 o 2000
			//empieza en el siglo 20
			return dd;
	}
	
	Date::Date()
		:y(default_date().year()), 		// ;00000 funciones!
		m(default_date().month()),
		d(default_date().day())
	{
	}		
	
	//int days_in_month(int y, Date::Month m); 	// en funciones auxiliares
	
	void Date::add_day(int n)	{
		
		if (n<0)
			error("add_day() Invalido: solo se permite numeros positivos");
		while (days_in_month<n) {	// mueve un mes a la vez
			add_month(1);
			n -= days_in_month;
		}
		d += n;
		
		//	while (days_in_month(y,m)<n) {	// mueve un mes a la vez
		//		add_month(1);
		//		n -= days_in_month(y,m);
		//	}
		//if(d>31 )
		//	error("add_day() Invalido: solo se tiene como maximo 31 dias en un mes");
	
	}
	void Date::add_month(int n)	{
	
		if (n<0 || n>12)
			error("add_month(): Invalido no puede ser numero negativo o mayor a 12 ")
		//m+= n;
	}
	void Date::add_year (int n) 
	{
		if(m==feb && d==29 && !leapyear(y+n)){
			
						//cuidado con anhos bisiestos!!
			m = mar; 				//usa primero de Mar
						//en vez de 29 de Feb 
			d = 1;
		}
		y+=n;
	}
	
	//FUNCIONES AUXILIARES ++, DIAS PARA CADA MES
//	int days_in_month(int y, Date::Month m)
//	{
//	    switch (m) {
//		case Date::feb:                        // the length of February varies
//			return (leapyear(y))?29:28;
//		case Date::apr: case Date::jun: case Date::sep: case Date::nov:
//			return 30;
//		default:
//			return 31;
//	    }
//	}
	
	//DEMAS CODIGO 
	bool is_date(int y, Date::Month m, int d)
	{
		//asume que y es valido
		
		if(d<=0) return false;			//d debe ser positivo
		
		//	if (days_in_month(y,m)<d) return false;
		//	 return true;
		
		int days_in_month = 31; 		//por lo general son 31
		switch (m) {
			
			case Date::feb:
				days_in_month = (leapyear(y))?29:28;
			break;
			case Date::apr: case Date::jun: case Date::sep:
			
			days_in_month = 30; 
			break;
				
		}
		
		if (days_in_month<d) return false;
		return true;
		
	
			
	}
	
	bool leapyear(int y)
	{
	   return (y%4 == 0 && (y%100 != 0 || y%400 == 0));
	   	//if (y%4) return false;
		//if (y%100==0 && y%400) return false;
		//return true;
	}
	bool operator ==(const Date& a, const Date& b)
	{
		return a.year() == b.year()
			&& a.month() == b.month()
			&& a.day() == b.day();
	}
		
	bool operator!= (const Date& a, const Date& b)
	{
		return !(a == b);
		}	
	
	ostream& operator<<(ostream& os, const Date& d)
	{
		
		return os<< '('<<d.year()<< ','<<d.month()
		<< ','<<d.day()<< ')';			
	}
	
	istream& operator>>(istream& is, Date& dd);
	{
	    int y, m, d;
	    char ch1, ch2, ch3, ch4;
	    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
	    if (!is) return is;
	    if (ch1!='(' || ch2!=',' || ch3!=',' || ch4!=')') { // Error en el formato
	        is.clear(ios_base::failbit);                    //limpia el stream
	        return is;
	    }
	    dd = Date(y,Date::Month(m),d);     // Actualizando dd
	    return is;	
	}
	
	enum Day {
		sunday, monday, tuesday, wednesday,
		thursday, friday, saturday
	};
	
	Day day_of_week(const Date& d) 		{return sunday;}
	Date next_Sunday(const Date& d) 	{return d;}
	Date next_weekday(const Date& d)	{return d;}
	
} 		//Fin Chrono AHHH!


int main()

try
{
	Chrono::Date holiday(1978, Chrono::Date::jul, 4);
	Chrono::Date d2= Chrono::next_Sunday(holiday);
	Chrono::Day d= day_of_week(d2);
	
	cout<<"Feriado es "<<holiday<<" d2 es "<<d2<<endl;
	
	return holiday != d2;
	
}

catch (Chrono::Date::Invalid&){
	
	cerr<<" error: Fecha invalida\n";
	return 1;
}
