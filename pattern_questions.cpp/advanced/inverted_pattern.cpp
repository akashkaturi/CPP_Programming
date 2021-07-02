#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"Enter the Value of N: "<<endl;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<< " ";
        }
        cout<<endl;
    }
    
    
    return 0;
}