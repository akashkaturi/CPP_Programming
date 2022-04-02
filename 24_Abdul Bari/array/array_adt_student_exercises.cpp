#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find_missing_element(vector<int> arr)
{
    int diff = arr[0] - 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing element is: " << i + diff << endl;
            break;
        }
    }
}
void find_multiple_missing_elements(vector<int> arr)
{
    int prev_diff = arr[0] - 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int curr_diff = arr[i] - i;
        if (curr_diff != prev_diff)
        {
            while (prev_diff < curr_diff)
            {
                // The elements between prev diff and curr diff are the missing elements.
                cout << "Missing Element is: " << i + prev_diff << endl;
                prev_diff++;
            }
        }
    }
}
void find_duplicates(vector<int> arr)
{
    unordered_map<int, int> map;
    for (auto i : arr)
    {
        map[i]++;
    }
    cout << "The duplicate elements are: " << endl;
    for (auto i : map)
    {
        if (i.second > 1)
        {
            cout << i.first << " ";
        }
    }
}
void element_pair_sum(vector<int> arr, int target)
{
    unordered_map<int, int> map;
    for (auto i : arr)
    {
        map[i]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (map.find(target - arr[i]) != map.end())
        {
            cout << target - arr[i] << " " << arr[i] << endl;
        }
    }
}
void max_min_single_scan(vector<int> arr)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        minimum = min(arr[i], minimum);
        maximum = max(arr[i], maximum);
    }
    cout << "Max element is " << maximum << endl
         << "Minimum element is: " << minimum << endl;
}
int main()
{
    vector<int> arr;
    int low, mid, high;
    vector<int> v = {1, 2,0, 4, 5, 7, 8, 9, 11, 14, 15, 18, 19,200034};
    vector<int> dups = {1, 1, 3, 4, 5, 5, 6, 6, 6, 7, 8, 9};
    cin >> low >> mid >> high;
    for (int i = low; i <= mid; i++)
    {
        arr.push_back(i);
    }
    for (int i = mid + 2; i <= high; i++)
    {
        arr.push_back(i);
    }

    // find_multiple_missing_elements(v);
    // find_duplicates(dups);
    // element_pair_sum(v, 13);
    max_min_single_scan(v);
    return 0;
}

/*
Input:


Output:


Explanation:

*/
