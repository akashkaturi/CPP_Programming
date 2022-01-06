#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxXor(int arr[], int n)
{
    int mXor = 0;
    int cXor = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cXor = max(arr[i], cXor ^ arr[i]);
        mXor = max(mXor, cXor);
    }
    return mXor;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << maxXor(arr, 4);
    return 0;
}

/*
Input:


Output:


Explanation:

*/