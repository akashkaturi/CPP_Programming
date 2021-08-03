#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int sum=0;
    long long n;
    int dig=0,rem,i=0;
    cin>>n;
    /*
    let binary number be 1 0 1 1 0 1(45)
    i is the powers of 2,
    dig is the answer we are going to find.
    1st iteration: n=101101
        rem=n%10 => 1
        sum= rem*pow(2,i) => 1*1;
        dig=dig+sum = 0+1;
        n=n/10 => n=10110
        ++i; increment i to 1;

    */
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