#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countOfelements(int arr[],int n,int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<k){
            count++;
        }
    }
    return count;
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout<<countOfelements(arr, n, k) << endl;
    

    return 0;
}

/*
Input:


Output:


Explanation:

*/