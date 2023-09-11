#ifndef COMPLEX_H
#define COMPLEX_H





class Complex
{
    private:
        
        double re , img;
    
    public:
         
         Complex(Complex& z);
         Complex();
         Complex(double a , double b);
         double getRe() ;
         double getIm() ;
         double modulus() ;
         double argument() ;
         Complex exchange();
         Complex& operator=(Complex& other);
         void display();
         Complex max_modulus(Complex& z1, Complex& z2);
         Complex normalized(Complex z);

         
};



#endif

