#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
maximum element till i
*/
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(i=0;i<n;i++){
        // this line replaces the mx value with the maximum value until now.
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
    return 0;
}

/*
Input:
5
1 -2 5 4 10

Output:
1 1 5 5 10
*/