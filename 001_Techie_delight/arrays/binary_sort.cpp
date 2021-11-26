#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sort_binary(int arr[], int n)
{
    int count = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        arr[k++] = 0;
    }
    while (k < n)
    {
        arr[k++] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_binary(arr,n);
    return 0;
}

/*
Input:


Output:


Explanation:

*/