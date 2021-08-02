#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void floodfill(int** a,int m, int n, int r, int c, int toFill, int prevFill){
    int rows=m;
    int cols=n;
    if(r<0 ||r>=rows || c<0 ||c>=cols){
        return;
    }
    if(a[r][c]!=prevFill){
        return;
    }
    a[r][c]=toFill;
    floodfill(a,m,n,r-1,c,toFill,prevFill);
    floodfill(a,m,n,r,c-1,toFill,prevFill);
    floodfill(a,m,n,r+1,c,toFill,prevFill);
    floodfill(a,m,n,r,c+1,toFill,prevFill);  
}
int main()
{   int m=7,n=8;
    int **a = new int*[n];
    for(int i=0;i<m;i++){
        a[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
// 1 1 1 1 1 1 1 1
// 1 1 1 1 1 1 1 1
// 2 2 2 2 2 1 1 1
// 1 1 1 1 2 2 1 1
// 1 1 1 1 2 2 1 1
// 1 1 1 1 2 2 1 1
// 1 1 1 1 1 1 1 1
    
    floodfill(a,m,n,2,0,3,2);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}