#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    int num;
    for(num=a;num<=b;num++){
        int inner_loop_counter;
        for(inner_loop_counter=2;inner_loop_counter<num;inner_loop_counter++)
        {
            if(num%inner_loop_counter==0){
                break;
            }
        }
        if(inner_loop_counter==num){
            cout<<num<<" is a prime number"<<endl;
            count+=1;
        }
    }
    cout<<"Total Number of Primes between "<<a<<" and "<<b<<" are "<<count<<endl;
    return 0;
}