#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sum_pair(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(sum - arr[i]) != m.end())
        {
            cout << arr[m[sum - arr[i]]] << " " << arr[i] << endl;
        }
        m[arr[i]] = i;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum_pair(arr, 5, 7);

    return 0;
}

/*
Input:


Output:


Explanation:

*/