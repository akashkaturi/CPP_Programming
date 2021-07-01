#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    while(n>=0){
        sum=sum+n;
        cin>>n;
    }
    
    cout<<"The sum of the numbers entered is: "<<sum<<endl;
    return 0;
}