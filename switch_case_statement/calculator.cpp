#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    char op;
    cout<<"Enter an operation (+,-,/,*)"<<endl;
    cin>>op;
    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '/':
            if (b==0){
             cout<<"Denominator cannot be zero"<<endl;
             break;
            }
            else{
                cout<<a/b<<endl;
            }
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        default:
        cout<<"Enter another operator";
        break;

    }


    
    return 0;
}