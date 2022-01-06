#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char k = s[0];

    return reverseString(s.substr(1)) + k;
}
int main()
{
    string k = "";
    cout << reverseString(k);
    return 0;
}

/*
Input:


Output:


Explanation:

*/