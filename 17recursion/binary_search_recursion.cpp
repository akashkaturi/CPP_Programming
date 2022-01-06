#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int searchElement)
{
    if (l > r)
    {
        return -1;
    }
    int mid = (l + r) / 2;
    if (arr[mid] == searchElement)
    {
        return mid;
    }
    if (searchElement < arr[mid])
    {
        return binarySearch(arr, l, mid, searchElement);
    }
    return binarySearch(arr, mid, r, searchElement);
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 11};
    cout << binarySearch(arr, 0, 7, 11);
    return 0;
}

/*
Input:


Output:


Explanation:

*/