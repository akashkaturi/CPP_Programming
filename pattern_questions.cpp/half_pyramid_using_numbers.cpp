#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of N"<<endl;
int i,j;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<i<<" ";
    }
    cout<<endl;
}
    
    return 0;
}