#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=9;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10;i++){
        for (int j = i+1; j < 10;j++){
            if(arr[i]+arr[j]==k){
                cout << i << " " << j << endl;
            }
        }
    }
    
        return 0;
}