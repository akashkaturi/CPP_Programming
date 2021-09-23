#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int l, int h)
{
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
}
void dnf(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {

        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr, mid, high);
            high--;
        }
    }
}
int main()
{
    int arr[10] = {1, 1, 2, 2, 0, 0, 1, 1, 0, 0};
    int n = 10;
    dnf(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}

/*
Input:


Output:


Explanation:

*/