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
    int currsum[n + 1]; // we are creating a new array of size n+1 to store the cumulative sum of each element in the arr.
    currsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + arr[i - 1]; // adding all the elements cumulatively from the original array.
    }
    int maxSum = INT_MIN;
    for (int i = 1; i < n + 1; i++) // here in this array we are starting from the outerloop
    {
        int sum = 0;

        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j]; // here we are going to subtract the sum larger subarray with the sum of smaller sub array cumulatively.
            maxSum = max(sum, maxSum);
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << currsum[i] << endl;
    }
    cout << maxSum << endl;
    return 0;
}