#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int using_inbuilt(vector<int> v)
{
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] != v[i - 1])
        {
            return v[i];
        }
        else
        {
            return -1;
        }
    }
    return -1;
    // for (int x = 0; x < v.size();x++)
    // {
    //     cout << v[x] << " ";
    // }
}
int main()
{
    vector<int> v;
    int num;
    while (cin >> num)
    {
        v.push_back(num);
    }
    cout<<using_inbuilt(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/