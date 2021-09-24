#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6};
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
    }
    cout << sum;
    return 0;
}

/*
Input:


Output:


Explanation:

*/