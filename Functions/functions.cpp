#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}

int add(int a, int b){
    print(a);
    print(b);
    int sum=a+b;
    return sum;
}

int main()
{
    int num1=10,num2=20;
    cout<<add(num1,num2)<<endl;
    cout<<1%2;
    return 0;
}