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
    int curr_len = 2;
    int pd = arr[1] - arr[0];
    int ans = INT_MIN;
    int i = 2;
    while (i < n)
    {   
        //if current difference is equal to prev difference then increase curr_len
        if (pd == arr[i] - arr[i - 1])
        {
            curr_len++;
        }
        // else create new prev diff and change the curr_len to 2.
        else
        {
            pd = arr[i] - arr[i - 1];
            curr_len = 2;
        }
        ans = max(ans, curr_len);
        i++;
    }
    cout << ans << endl;
    return 0;
}

/*
Input:
7
10 7 4 6 8 10 11

Output:
4

Explanation:
4 6 8 10 - longest.

*/