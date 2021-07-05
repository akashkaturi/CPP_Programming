#include<iostream>
#include<cmath>
using namespace std;
int oct_to_dec(long n){
    int i=0,sum=0,remainder,last_digit;
        while(n>0){
        if(i>7){
            break;
        }
        last_digit=n%10;
        sum=sum+last_digit*pow(8,i);
        n=n/10;
        i=i+1;
    }
    return sum;
}
int main()
{
    long n;
    cin>>n;
    cout<<oct_to_dec(n)<<endl;
    
    return 0;
}