#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n = 10;
bool searchEle(vector<int> &arr, int x)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
bool insertEle(vector<int> &arr, int y, int yi)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == yi)
        {
            arr[i] = y;
            return true;
        }
    }
    return false;
}
bool deleteEle(vector<int> &arr, int z)
{
    int index = 0;
    bool isPresent = 0;
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == z)
        {
            index = i;
            isPresent = 1;
        }
    }
    if (isPresent)
    {
        for (int i = n; i > index; i--)
        {
            arr[i - 1] = arr[i];
        }
    }
    return true;
}

int main()
{
    vector<int> v;
    int n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    cout << insertEle(v, 22, 4) << endl;
    for (auto x : v)
    {
        cout << x<<endl;
    }
    
    return 0;
}

/*
Input:


Output:


Explanation:

*/