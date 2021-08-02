#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,last_digit;
    cin>>n;
    int temp=n;
    while(n>0){
        last_digit=n%10;
        sum=sum+pow(last_digit,3);
        n=n/10;
    }
    if(sum==temp){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }

    return 0;
}