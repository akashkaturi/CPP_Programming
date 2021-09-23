#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int l, int r)
{
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}
//{1, 3, 4, 7, 5, 6, 2}
void wave_sort(int arr[], int n)
{
    //two if statements not "elseif" because after iterating 2times the ith element should be compared with both previous and next element until the n-2th element.
    //so we have to make i+=2 and two if statements.
    
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (arr[i] > arr[i + 1] && i < n - 1)
        {
            swap(arr, i, i + 1);
        }
    }
}
int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    wave_sort(arr, 7);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
Input:
1 3 4 7 5 6 2

Output:


Explanation:

*/