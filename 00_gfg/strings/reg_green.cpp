#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void count_rg(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
        {
            count++;
        }
    }
    if (count > s.length() / 2)
    {
        int k = s.length() - count ;
        cout << k;
    }
    else
    {
        cout << count;
    }
}
int main()
{
    string s = "GRRRGGG";
    count_rg(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/