#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool three_sum(int arr[], int target, int n)
{
    sort(arr, arr + n);
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = arr[i] + arr[low] + arr[high];
            if (current == target)
            {
                found = true;
            }
            if (current < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }
    return found;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << (three_sum(arr, 10, 10));

    return 0;
}

/*
Input:


Output:


Explanation:

*/