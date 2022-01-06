#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find_max(vector<int> v)
{
    // int m = INT_MAX;
    // int arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     arr[v[i]] = 1;
    // }
    // for (int i = m-1; i >= 0; i--)
    // {
    //     if (arr[i] == 1)
    //     {
    //         cout << arr[i];
    //     }
    // }
    for (auto x:v){
        cout << x << endl;
    }
}
int main()
{
    int n;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    find_max(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/