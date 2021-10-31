#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate_elements(vector<int> &v, int k)
{

    int n = v.size();
    k = n > 0 && k > 0 ? k % n : 0;
    reverse(v.begin(), v.begin() + n - k - 1);
    reverse(v.begin() + n - k - 1, v.end());
    reverse(v.begin(), v.end());
}
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int len, k;
        cin >> len >> k;
        int num;
        vector<int> v;
        while (cin >> num)
        {
            v.push_back(num);
        }
        rotate_elements(v, k);
        for (auto x : v)
        {
            cout << x << " ";
        }
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/