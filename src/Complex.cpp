#include <iostream>
#include <cmath>
#include "Complex.h"


using namespace std;


//constructeur permettant l’initialisation à partir de deux réels (parties réelle et imaginaire)
Complex::Complex(double a , double b){
    
    re = a ;
    img = b ; 

    cout<<"+++Complex("<<a<<","<<b<<")"<<endl;
    cout<<"l'adresse de l'objet créé est:"<<this<<endl;
}



//constructeur par défaut
Complex::Complex() {
    
    re = 0.0 ;
    img = 0.0 ;

    cout<<"+++Complex()"<<endl;
    cout<<"l'adresse de l'objet créé est:"<<this<<endl;
} 



//constructeur par recopie
Complex::Complex(Complex& z){
    
    re = z.getRe();
    img = z.getIm() ; 

    cout<<"rrrComplex("<<re<<"+i."<<img<<")"<<endl;

    cout<<"l'adresse de l'objet créé est:"<<this<<endl;
    
    cout<<"l'adresse de l'objet recopié est:"<<&z<<endl;
}




//opérateur d’affectation
Complex& Complex::operator=(Complex& other)
{
    re = other.getRe();
    img = other.getIm();
    
    cout<<"op=Complex("<<re<<"+i."<<img<<")"<<endl;

    return *this;
}




double Complex::modulus() const{
    
    return sqrt(re * re + img * img);
}



// argument d'un complex
double Complex::argument() const{
    
    return atan2(img,re);

}



double Complex::getRe() const{
    
    return re;
}


double Complex::getIm(){
    
    return img;
}



//méthode affichant le complexe sous la forme « a+i.b »
void Complex::display(){
    cout<<re<<" + i."<<img<<endl;
}



Complex Complex::exchange(){

    double k=re;
    re = img;
    img = k;

    return *this;
}




Complex operator+(Complex z1, Complex z2){
    
    Complex z3(z1.getRe() + z2.getRe(),z2.getIm() + z1.getIm());
    
    return z3;
}


Complex operator-(Complex z1, Complex z2){
    
    Complex z3(z1.getRe() - z2.getRe(),z2.getIm() - z1.getIm());

    return z3;

}



Complex operator*(Complex z1, Complex z2){
    
    Complex z3((z1.getRe() * z2.getRe()) - (z1.getIm() * z2.getIm()),(z2.getIm() * z1.getRe()) + ( z1.getIm() * z2.getRe()));
    return z3;
}



Complex normalized(Complex z){
    
    Complex z1(z.getRe()/z.modulus() , z.getIm()/z.modulus());
    return z1;
}

/*
void rotate(Complex& z,double d){

}
*/

Complex max_modulus(Complex& z1, Complex& z2){

    if(z1.modulus() >= z2.modulus()){

        return z1;
    }

    return z2;
}












/*
Complex operator+(Complex z1, Complex z2){
    
    Complex z3;

    z3.re = z1.re + z2.re;
    z3.img = z2.img + z1.img;

    return z3;

}


Complex operator-(Complex z1, Complex z2){
    
    Complex z3;

    z3.re = z1.re - z2.re;
    z3.img = z2.img - z1.img;

    return z3;

}



Complex operator*(Complex z1, Complex z2){
    
    Complex z3 = new Complex((z1.re * z2.re) - (z1.img * z2.img),(z2.img * z1.re) + ( z1.img * z2.re));
    return z3;
}
*/












