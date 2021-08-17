#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void mark_and_toys(int arr[], int n, int k)
{
    int sum = 0;
    int num = 0;
    int count = 0;
    while (count < n)
    {
        for (int j = 0; j < n - count - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        sum += arr[n - count - 1];
        // cout << sum << endl;
        num += 1;
        if (sum == k)
        {
            cout << num << endl;
            count = n;
            break;
        }
        else if (sum > k)
        {
            num -= 1;
            cout << num << endl;
            count = n;
            break;
        }
        count += 1;
    }
    // for (int i = 0; i < n;i++){
    //     cout << arr[i] << endl;
    // }
}
int main()
{
    int n, k;
    int arr[n];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mark_and_toys(arr, n, k);

    return 0;
}

/*
Input:


Output:


Explanation:

*/