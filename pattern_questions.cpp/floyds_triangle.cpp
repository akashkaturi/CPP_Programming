#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    int count=0;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            count+=1;
            cout<<count<<" ";
        }
        cout<<endl;
    }

    return 0;
}