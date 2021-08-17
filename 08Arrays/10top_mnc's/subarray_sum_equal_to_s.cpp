#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    // this loop will run until sum of sum+a[j]>=s, then it terminates
    // leaving the current value of the index j
    while (j < n && sum + arr[j] <= k)
    {
        sum += arr[j];
        j++;
    }
    //if the sum is equal to value, then directly the program terminates here by returning the ouput.
    // this implies that the sum should contain values starting from the first element in the array.
    if (sum == k)
    {
        cout << "sum from " << i + 1 << " to " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum += arr[j];
        // cout << sum <<endl;
        // in this loop we are removing the starting elements that won't add up the given sum.
        while (sum > k)
        {
            sum -= arr[i];
            i++;
        }
        // and when ever the sum is less than k, the while loop terminates giving the answer., if there is no answer then the loop just simply terminates by displaying -1,-1

        if (sum == k)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << "sum from " << st << " to " << en << endl;

    return 0;
}

/*
Input:
5
1 2 2 2 3
6

Output:
sum from 2 to 4

Explanation:
the sum from 2nd element to 4th element is 6.
*/