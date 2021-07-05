#include<iostream>
#include<cmath>
using namespace std;
int isprime(int n){
    int i;
 
    for (i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}

int main()
{
    int i,a,b;
    cin>>a>>b;
    if(a==1){
        ++a;
    }
    for(i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<" is a prime"<<endl;
        }
    }
    
    return 0;
}

