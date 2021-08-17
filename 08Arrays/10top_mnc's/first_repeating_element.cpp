//https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25&t=5s
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

    const int max = 1e6 + 2;
    int idx[max];

    for (int i = 0; i < max; i++)
    {
        idx[i] = -1;
    }
    int min_idx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            min_idx = min(min_idx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (min_idx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << min_idx << endl;
    }
    return 0;
}

/*
Input:
7
5 4 4 2 1 2 3

Output:
1

Explanation:
becuase 4 is at index 1 and it repeated two times
2 also repeated two times but 1 is the smallest index of a number occuring more than once.

*/