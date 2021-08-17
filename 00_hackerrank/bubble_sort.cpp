#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[], int n)
{
    int count = 0;
    int swaps = 0;
    while (count < n)
    {
        for (int j = 0; j < n - count-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps += 1;
            }
        }
        count += 1;
    }
    return swaps;
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
    int count = bubble_sort(arr, n);
    cout << "Array is sorted in " << count << " swaps." << endl;
    cout << "First Element: " << arr[0] << endl;
    cout << "Last Element: " << arr[n-1] << endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/