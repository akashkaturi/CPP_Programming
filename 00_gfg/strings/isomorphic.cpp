#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool areIsomorphic(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    unordered_map<char, char> x;
    unordered_map<char, bool> y;
    for (int i = 0; i < s1.length(); i++)
    {
        char ch1 = s1[i];
        char ch2 = s2[i];
        if (x.find(ch1) != x.end())
        {
            if (x[ch1] != ch2)
            {
                return false;
            }
        }
        else
        {

            if (y.find(ch2) != y.end())
            {
                if (y[ch2] != true)
                {
                    return false;
                }
            }
            else
            {
                x[ch1] = ch2;
                y[ch2] = true;
            }
        }
    }
    return true;
}
int main()
{
    string s1 = "aac", s2 = "aac";
    cout << areIsomorphic(s1, s2);
    // unordered_map<char, bool> x;
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     x[s1[i]] = true;
    // }
    // for (auto k : x)
    // {
    //     cout << k.first << " " << k.second << endl;
    // }

    return 0;
}

/*
Input:


Output:


Explanation:

*/