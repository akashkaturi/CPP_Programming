// Max sum of Longest subbarray
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int currsum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum = max(nums[i], currsum + nums[i]);
        max_sum = max(max_sum, currsum);
    }
    cout << max_sum << endl;

    return 0;
}