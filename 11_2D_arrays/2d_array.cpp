#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter No of Rows and columns: "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements of Array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
  for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cin>>x;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==x){
                cout<<"Element is found at "<<i+1<<","<<j+1<<endl;
            }
        }
    }
    
    return 0;
}