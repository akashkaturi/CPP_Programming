#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printing_reverse_string(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    printing_reverse_string(s.substr(1));
    char c = s[0];
    cout << c;
}

int main()
{
    string s = "hello world";
    printing_reverse_string(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/