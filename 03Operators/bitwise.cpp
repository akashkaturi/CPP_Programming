#include<iostream>
using namespace std;
int main()
{
    int a=16, b=8;
    //a=1000, b=0100
    cout<<"a & b: "<<(a&b)<<endl; //And = A+B
    cout<<"a | b: "<<(a|b)<<endl;  // OR = A.B
    cout<<"a ^ b: "<<(a^b)<<endl; // XOR = (A+B).(~A+~B)
    cout<<"~a: "<< (~a)<<endl; // NOT = ~A
    cout<<"a << 2: "<<(a<<2)<<endl; //Left shift operator a<<n --> a*2^n
    cout<<"a >> 2: "<<(a>>2)<<endl; //Right shift operator a>>n --> a/2^n
    return 0;
}