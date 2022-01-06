#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int mid = s.length() / 2;
    int start = 0;
    int end = 0;
    for (int i = 0; i < mid; i++)
    {
        /* code */
        start += s[i] - '0';
    }
    for (int i = mid + 1; i < s.length(); i++)
    {
        /* code */
        end += s[i] - '0';
    }
    if (start == end)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    cout<<check(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/