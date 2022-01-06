#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void max_product(vector<int> v)
{
    int max1 = INT_MIN, max_two = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max1)
        {
            max_two = max1;
            max1 = v[i];
        }
        else if (v[i] > max_two)
        {
            max_two = v[i];
        }
        if (v[i] < min1)
        {
            min2 = min1;
            min1 = v[i];
        }
        else if (v[i] < min2)
        {
            min2 = v[i];
        }
    }
    int m1 = max1 * max_two;
    int m2 = min1 * min2;
    int res = m1 > m2 ? m1 : m2;
    cout << res << endl;
}

int main()
{
    vector<int> v;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    max_product(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/