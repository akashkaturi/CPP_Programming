#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min_swaps(vector<int> v)
{
    int index = 1;
    int swaps = 0;
    while (index < v.size())
    {
        if (v[index] != index)
        {
            int temp = v[index];
            v[index] = v[v[index]];
            v[temp] = temp;
            swaps++;
        }
        else
        {
            index++;
        }
    }
    return swaps;
}
int main()
{
    int n;
    vector<int> v;
    while (cin >> n)
    {

        v.push_back(n);
    }
    cout << min_swaps(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/