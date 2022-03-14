#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void three_sum(int arr[], int target, int n)
{
    sort(arr, arr + n);
    bool found = false;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = arr[i] + arr[low] + arr[high];
            vector<int> v_inner;
            if (current == target)
            {
                found = true;
                v_inner.push_back(arr[i]);
                v_inner.push_back(arr[low]);
                v_inner.push_back(arr[high]);
                v.push_back(v_inner);
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
    if (found)
    {
        for (auto i : v)
        {
            for (auto k : i)
            {
                cout << k << " ";
            }
            cout << endl;
        }
    }
    if (!found)
    {
        cout << "Not found";
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    three_sum(arr, 10, 10);

    return 0;
}

/*
Input:


Output:


Explanation:

*/