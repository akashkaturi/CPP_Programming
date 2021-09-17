#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void pairsum(int arr[], int l, int r, int k)
{
    while (l < r)
    {

        if (arr[l] + arr[r] == k)
        {
            cout << arr[l] << " " << arr[r] << endl;
            l++;
            r--;
        }
        else if (arr[l] + arr[r] > k)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for this we need to have a sorted array, if we don't have sorted array we need to sort the array and then follow this approach.
    int l = 0;
    int r = 9;
    int k = 10;
    pairsum(arr, l, r, k);
    return 0;
}