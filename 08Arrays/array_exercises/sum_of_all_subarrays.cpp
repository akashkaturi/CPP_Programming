//Every subarray is subsequence but every subsequence is not a subarray.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
    }
    return 0;
}
/*
input:
3
1 2 2 

output:
1 3 5 2 4 2
*/