#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int row;
    cout<<"Enter No of * in first line: "<<endl;
    cin>>row;
    // for(i=0;i<row;i++){
    //     for(j=row-i;j>0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(i=row;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}