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
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) // outer loop for start pointer
    {
        for (int j = i; j < n; j++) // inner loop for end pointer
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {   // loop to print the values between start point and end point.
                // cout << arr[k] << " ";
                sum += arr[k];
                max_sum=max(sum, max_sum);
            }
           // cout << endl;// seperate the subarrays with a line.
        }
    }
    cout << max_sum << endl;
    return 0;
}