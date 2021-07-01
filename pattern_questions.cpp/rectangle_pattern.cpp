#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,m;
    cout<<"Enter Rows and Columns"<<endl;
    cin>>n>>m;
    for (i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}