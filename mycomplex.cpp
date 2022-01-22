/*Fail s opisaniem metodov klassa Complex*/
#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

Complex :: Complex (double aRe , double aIm)    //Konstruktor klassa
{
    Re = aRe;                                   //aRe - deystvitelnaya chact'
    Im = aIm;                                   //aIm - mnimaya chact'
}

Complex :: Complex (const Complex& aRval)       //Konstruktor klassa
{
    Re = aRval.Re;                              //aRval - kompleksnoe chislo , aRval.Re - deystvitelnaya chact'
    Im = aRval.Im;                              //aRval - kompleksnoe chislo , aRval.Im - mnimaya chact'
}

Complex :: ~Complex()                             //Destruktor klassa
{
    Re = 0.0;
    Im = 0.0;
}

void Complex :: Set (double aRe , double aIm)           //Ustanovka deystvitelnoy i mnimoy chacti
{
    Re = aRe;
    Im = aIm;
}

Complex :: operator double()                            //Vozvraschaet modul' kompleksnogo chisla
{
    return abs();                                       //Modul' koplesnogo chisla
}

double Complex :: abs ()                                //Vozvraschaet modul' vyrazheniya kompleksnogo chisla
{
return sqrt(Re * Re + Im * Im);                         //Modul' vyrazheniya koplesnogo chisla
}

Complex Complex :: operator + (const Complex & aRval)       //Vozvraschaet rezultat slozheniya kompleksnogo chisla
{
    Complex Result;
    Result.Re = Re + aRval. Re;
    Result.Im = Im + aRval.Im;
    return Result;                                          //Rezultat
}

Complex Complex :: operator - (const Complex & aRval)           //Vozvraschaet rezultat vychitaniya kompleksnogo chisla
{
    Complex Result;
    Result.Re = Re-aRval.Re;
    Result.Im = Im-aRval.Im;
    return Result;                                              //Rezultat
}

Complex Complex :: operator + (const double & aval)             //Vozvraschaet rezultat slozheniya deystvitelnogo chisla
{
    Complex result;
    result.Re = Re + aval;
    result.Im = Im;
    return result;                                              //Rezultat
}

Complex Complex :: operator - (const  double & aRval)           //Vozvraschaet rezultat vychitaniya deystvitelnogo chisla
{
    Complex Result(* this);
    Result.Re = Re - aRval;
    return Result;                                              //Rezultat
}

Complex Complex :: operator * (const Complex & aRval)           //Vozvraschaet rezultat umnozheniya kompleksnogo chisla
{
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;                                              //Rezultat
}

Complex Complex :: operator * (const double & aRval)            //Vozvraschaet rezultat umnozheniya deystvitelnogo chisla
{
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;                                              //Rezultat
}
Complex Complex :: operator / (const double & aRval)            //Vozvraschaet rezultat deleniya deystvitelnogo chisla
{
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;                                              //Rezultat
}

Complex & Complex :: operator += (const Complex & arval)        //Ssylaetcya na rezultat slozheniya kompleksnogo chisla
{
    Re += arval.Re;
    Im += arval.Im;
    return * this;                                              //Vozvrat po znacheniu
}

Complex & Complex :: operator -= (const Complex & aRval)        //Ssylaetcya na rezultat vychitaniya kompleksnogo chisla
{
    Re -= aRval.Re;
    Im -= aRval.Im;
    return * this;                                              //Vozvrat po znacheniu
}

Complex & Complex :: operator *= (const Complex & aRval)        //Ssylaetcya na rezultat umnozheniya kompleksnogo chisla
{
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return * this;                                              //Vozvrat po znacheniu
}

Complex& Complex::operator+= (const double& aRval)
{
    Re+=aRval;
    return*this;
}

Complex&Complex::operator-=(const double&aRval)
{
    Re -= aRval;
    return *this;
}

Complex&Complex   ::operator  *=  ( const  double  &  aRval)
{
    Re *= aRval;
    Im *= aRval;
    return *this;
}

Complex & Complex :: operator/=(const double&aRval)
{
    Re/=aRval;
    Im /=aRval;
    return *this;
}

Complex& Complex::operator= (const Complex& aRval)
{
    Re=aRval.Re;
    Im=aRval.Im;
    return *this;
}

Complex& Complex::operator= (const double& aRval)
{
    Re = aRval;
    Im = 0.0;
    return *this;
}

istream & operator >>(istream &stream, Complex&a)
{
    char tmp[256];
    stream >> a.Re >>a.Im >> tmp;
    return stream;
}

ostream& operator<<(ostream&stream,Complex&a)
{
    stream << a.Re;
    if( !(a.Im < 0) )
        stream << '+';
    stream << a.Im << 'i';
    return stream;
}

Complex operator+ (const double& aLval, const Complex& aRval)
{
    Complex Result;
    Result.Re= aLval+aRval.Re;
    Result. Im=  aRval.Im;
    return Result;
}

Complex operator-(const double &aLval, const Complex&aRval)
{
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}

Complex operator* (const double& aLval, const Complex& a)
{
    Complex r;
    r.Re =aLval* a.Re;
    r.Im =aLval *a.Im;
    return r;
}

int main()//Funkciya Main() dobavlena dlya kompilyacii
{
return 0;
}
