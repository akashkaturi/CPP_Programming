#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void access_array_fun(int** arr){
    cout<<arr[1][1]<<endl;
}
int main()
{   int n;
    cin>>n; 
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    access_array_fun(arr);
    return 0;
}