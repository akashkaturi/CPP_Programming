#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// compile time 
//function overloading, operator overloading
// run time
// virtual function

// function overloading
class Ak_codes{
    public:
    void function(){
        cout<<"This is the function with no arguments"<<endl;
    }
    void function(int x){
        cout<<x<<" is the function with one argument"<<endl;
    }
    void function(double x){
        cout<<"This is the function with double argument"<<endl;
    }
};


//operator overloading
//the operators that cannot be overloaded are
    /*
    scope operator (::)
    sizeof
    member selector - (.)
    member pointer selector - (*)
    ternary operator - (?:)
    */

class Complex{
    int real, imag;
    public:
    Complex(int i=0, int j=0){
        real = i;
        imag = j;
    }
    //return type , operator keyword, operators like +,-,*,/
    Complex operator +(Complex const &obj){
        Complex res; //c1+c2 == c1.add(c2)
        res.real = real+obj.real; //c1.real + c2.real
        res.imag = imag+obj.imag; //c1.imag + c2.imag
        return res;
    }
    void display(){
        cout<<real << " + "<<imag<<"i"<<endl;
    }
};

int main()
{
    Ak_codes obj;
    obj.function();
    obj.function(2);
    obj.function(1.0);
    Complex c1(3,4), c2(4,5);
    Complex c3=c1+c2; //c1.add(c2);
    c3.display();
    
    return 0;
}