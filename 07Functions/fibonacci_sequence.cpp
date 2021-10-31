#include<iostream>
using namespace std;
int fibbonacci(int n){
    int a=0,b=1;
    int i;
    int next_term;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        next_term=a+b;
        a=b;
        b=next_term;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    fibbonacci(n);


    
    return 0;
}