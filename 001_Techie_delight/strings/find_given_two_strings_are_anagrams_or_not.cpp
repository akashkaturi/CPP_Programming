#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check_anagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    for (int i = 0; i < s1.length(); i++)
    {
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        m2[s2[i]]++;
    }

    if (m1 == m2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s1 = "listen", s2 = "silent";
    cout << check_anagram(s1, s2) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/