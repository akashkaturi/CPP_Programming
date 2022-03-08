#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int kth(vector<int> v, int k)
{
    sort(v.begin(), v.end());
    if (k <= v.size())
    {
        return v[k - 1];
    }
    return -1;
}
int main()
{
    vector<int> v = {4, 5, 3, 2, 1, 6};
    int k = 3;
    cout << kth(v, k) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/