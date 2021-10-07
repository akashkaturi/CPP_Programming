#include<iostream>
using namespace std;
void factorial(int n){
    double product=1;
    for(int i=n;i>1;i--)
    {
        product=product*i;
    }
    cout<<product<<endl;
    return; 
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    
    return 0;
}