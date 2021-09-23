#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string remove_duplicates(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string res = remove_duplicates(s.substr(1));
    if (ch == res[0])
    {
        return res;
    }
    return ch + res;
}
int main()
{
    string s = "aaabbbssskkkkddd";
    cout << remove_duplicates(s) << endl;

    return 0;
}
