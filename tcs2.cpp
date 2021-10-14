#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pair_count(vector<int> v)
{
    int count = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] * v[i + 1] == i * i + 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> v;
    int num;
    while (cin >> num)
    {
        v.push_back(num);
    }
    cout << pair_count(v) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/