#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//single inheritance
class A{
    public:
    void functionA(){
        cout<<"This is function A"<<endl;
    }    
};
class B: public A{
    public:
    void functionB(){
        cout<<"This is class B inheriting class A"<<endl;
    }
};
class C{
    void functionC(){
        cout<<"This is function C"<<endl;
    }
};
//Multiple inheritance 
class D: public C,public A{
    public:
    void functionD(){
        cout<<"This is class D of type multiple inheritance and this is inheriting class C and class A";
    }
};


//Multilevel Inheritance
class E: public B{
    public:
    void functionE(){
        cout<<"This class E is of type multilevel inheritance and this is inheriting class B and A"<<endl;
    }
};
//Hybrid Inheritance -  mixture of any of the above types.
class F:public E,public D,public B{
    public:
    void functionF(){
        cout<<"This is Class C of hybrid inheritance which is the combination of single, multilevel and multiple level inheritance"<<endl;
    }
};
//hierarchical inheritance is nothing but  its just like this
        //     A
        //    / \
        //   B   C 
        //  / \ / \
        // D  E F  G
        
int main()
{
    B objB;
    D objD;
    E objE;
    F objF;
    objE.functionB();
    objF.functionE();
 
    
    return 0;
}