#include<iostream>
using namespace std;
int factorial(int n){
    int product=1;
    for(int i=n;i>1;i--)
    {
        product=product*i;
    }
    // cout<<product<<endl;
    return product;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int numerator=factorial(n);
    int den1=factorial(n-r);
    int den2=factorial(r);
    float final=numerator/(den1*den2);
    cout<<final<<endl;
    
    return 0;
}