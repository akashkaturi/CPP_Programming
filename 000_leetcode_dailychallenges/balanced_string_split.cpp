#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int balancedStringSplit(string s)
{
    stack<char> st;
    int count = 0;
    int l = 0, r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            l++;
        else if (s[i] == 'R')
            r++;
        if (l == r)
            count++;
    }
    return count;
}
int main()
{
    string s;
    cin >> s;
    cout << balancedStringSplit(s) << endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/