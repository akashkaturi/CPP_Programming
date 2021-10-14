#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max_num(vector<int> v)
{
    int max_val = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        max_val = max(max_val, v[i]);
    }
    return max_val;
}
int min_num(vector<int> v)
{
    int min_val = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        min_val = min(min_val, v[i]);
    }
    return min_val;
}
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
    {
        v.push_back(num);
    }
    cout << max_num(v) << endl;
    cout << min_num(v) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/