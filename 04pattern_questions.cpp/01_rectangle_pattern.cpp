#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int row,column;
    cout<<"Enter Rows and Columns"<<endl;
    cin>>row>>column;
    for (i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}