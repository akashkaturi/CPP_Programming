#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        for(j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}