#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void to_lowercase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
}
int main()
{
    string s = "AABcdeZBGH";
    to_lowercase(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/