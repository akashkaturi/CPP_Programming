#include<iostream>
using namespace std;
int factorial(int n){
    int i;
    int fact=1;
    for(i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    int i,j;
    int n;
    cin>>n;
    int num,den1,den2;
    float total;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++){
            int num=factorial(i);
            int den1=factorial(i-j);
            int den2=factorial(j); //we can simply do this all in one line. I breaked it down to understand better.
            total=num/(den1*den2);
            cout<<total<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}