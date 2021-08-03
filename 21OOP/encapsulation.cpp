#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
    public: 
    int a;
    void funcA(){
        cout<<"Public class A"<<endl;
    }
    private:
    int b;
    void funcB(){
        cout<<"Private Class B"<<endl;
    }
    protected:
    int c;
    void funcC(){
        cout<<"Protected Class C"<<endl;
    }


};
int main()
{
    A a;
    a.funcA();
    a.a=2;
    
    
    return 0;
}