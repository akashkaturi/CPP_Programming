#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int strStr(string s, string needle)
{
    int ht = s.size();
    int nd = needle.size();

    if (nd == 0)
        return 0;
    if (ht < nd)
        return -1;
    for (int i = 0; i < ht; i++)
    {
        if (i + nd <= ht)//because if the len(needle) + the current index >ht then there no needle exists.
        {
            if (s.substr(i, nd) == needle)
            {   
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    string s, needle;
    cin >> s >> needle;
    cout << strStr(s, needle);
}

/*
Input:


Output:


Explanation:

*/