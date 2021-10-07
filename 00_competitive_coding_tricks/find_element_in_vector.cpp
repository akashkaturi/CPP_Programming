#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 6, 2, 1, 7, 8};
    vector<int>::iterator it;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    it = find(v.begin(), v.end(), 2);
    cout << it - v.begin() << endl;
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    reverse(v.begin(), v.end());

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/