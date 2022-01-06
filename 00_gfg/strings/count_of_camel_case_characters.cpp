#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count(string s)
{
    int val = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            val++;
        }
    }
    return val;
}
int main()
{
    string s;
    cin >> s;
    cout << count(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/