#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int num;
    while (cin >> num)
    {
        v.push_back(num);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            cout << v[i] << endl;
        }
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/