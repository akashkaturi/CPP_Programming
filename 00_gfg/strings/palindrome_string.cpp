#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int palindromeCheck(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (rev == s)
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s = "racecar";
    cout << palindromeCheck(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/