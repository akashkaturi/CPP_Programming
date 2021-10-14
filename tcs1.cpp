
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findItems(int arr[], int n, int temp)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (temp / arr[i]);
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxval = INT_MIN;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    int high = maxval * m;
    int low = 1;
    while (low < high)
    {
        int mid = (low + high) >> 1;

        int itm = findItems(arr, n, mid);

        if (itm < m)
            low = mid + 1;
        else
            high = mid;
    }

    cout << high;
    return 0;
}

/*
Input:


Output:


Explanation:

*/