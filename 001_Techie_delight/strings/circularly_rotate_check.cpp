#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool circular_check(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        rotate(s1.begin(), s1.begin() + 1, s1.end());

        if (s1 == s2)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1 = "ABCD", s2 = "DABC";
    cout << circular_check(s1, s2) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/