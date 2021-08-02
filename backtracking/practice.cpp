#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if (arr[row][y]==1)
        {
            return false;   
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;

}
bool nqueen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){ 
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;
            if(nqueen(arr,x+1,n)){
                return true;
            }
            else{
                arr[x][col]=0;
            }
        }
    }
    return false;
}

int main()
{
    int N;
    cin>>N;
    int **arr =new int*[N];
    for(int i=0;i<N;i++){
        arr[i]=new int[N];
        for(int j=0;j<N;j++) {
            arr[i][j]=0;
        }
    }
    if(nqueen(arr,0,N)){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}