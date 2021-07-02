#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int count=0;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            count+=1;
            cout<<count%2<<" ";
        }
    cout<<endl;
    }
    
    return 0;
}