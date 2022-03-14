#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string answer = "";
string hello(string s)
{

    if (s.length() == 0)
    {
        return "";
    }
    return hello(s.substr(1)) + s[0];
}
int main()
{
    string s = "akash";
    string final = hello(s);
    cout << final;
    return 0;
}

/*
Input:


Output:


Explanation:

*/