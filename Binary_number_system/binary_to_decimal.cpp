#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int sum=0;
    long long n;
    int dig=0,rem,i=0;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=rem*pow(2,i);
        dig=dig+sum;
        n=n/10;
        ++i;
    }   
   cout<<dig<<endl;

    
    return 0;
}