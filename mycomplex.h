/*Fail s zagolovochnym failom klassa Complex*/

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

class Complex  						//Klass kompleksnogo chisla
{
double Re;     						//Deistvitelnaya chast'
double Im; 						//mnimaya chast'
public:							//Spisok chlenov klassov
	Complex(double aRe = 0, double aIm = 0);		//Konstruktor mnimoy i deystvitelnaoi chacti
	Complex(const Complex&);			//Konstruktor kompleksnogo chisla
~Complex(    );						//Destruktor
void Set(double aRe, double aIm = 0);			//Ustanovka deystvitelnoy i mnimoy chacti
operator double();					//Vozvraschaet modul' kompleksnogo chisla
double abs();						//Modul' koplesnogo chisla
friend istream& operator >> (istream & , Complex &) ; 	// Druzhestvennyi mrtod operacii perezagruzki vvoda
friend ostream& operator << (ostream & , Complex & );	// Druzhestvennyi mrtod operacii perezagruzki vyvoda
Complex operator + (const Complex &);
Complex operator - (const Complex &);
Complex operator + (const double &);
Complex operator - (const double &);
Complex operator * (const Complex &);
Complex operator * (const double &);
friend 		Complex operator+ (const double&, const Complex&);

friend Complex operator- (const 	double&, const Complex&);


friend Complex operator* (const double&, const Complex&)    ;Complex operator/ (const double&);

    Complex& operator+= (const Complex&);
Complex  &  operator-= (const Complex&)    ;
    Complex& operator*= (const Complex& );  Complex& operator  += (const double&);
Complex& operator-= (const double&);
Complex  &operator  *=(const double  & );
Complex  & operator /=( const   double & );
Complex& operator = (  const   Complex&);
Complex & operator= (const double&);};
#endif
