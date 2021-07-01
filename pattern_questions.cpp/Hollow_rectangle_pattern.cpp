#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int row,column;
    cout<<"Enter rows and Columns"<<endl;
    cin>>row>>column;
    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i==1 || i==row){
                cout<<"*";
            }
            else if( (j==1) || j==column){ // if we want we can add this condition to the above condition and make the code still smaller.
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}