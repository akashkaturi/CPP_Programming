#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    if (s.length() == 0 || s.length() == 1)
    {
        return true;
    }
    if (s[0] != s[s.length() - 1])
    {
        return false;
    }
    return isPalindrome(s.substr(1, s.length() - 2));
}
int main()
{
    string s = "bunnub";
    cout << isPalindrome(s) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/