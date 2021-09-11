#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int value(char s)
{
    if (s == 'I')
    {
        return 1;
    }
    else if (s == 'V')
    {
        return 5;
    }
    else if (s == 'X')
    {
        return 10;
    }
    else if (s == 'L')
    {
        return 50;
    }
    else if (s == 'C')
    {
        return 100;
    }
    else if (s == 'D')
    {
        return 500;
    }
    else if (s == 'M')
    {
        return 1000;
    }
    return -1;
}
int rom_to_decimal(string s)
{
    int sum = 0;
    int i;
    for (i = 0; i < s.length() - 1; i++)
    {
        if (value(s[i]) >= value(s[i + 1]))
        {
            sum += value(s[i]);
        }
        else
        {
            sum -= value(s[i]);
        }
    }
    if (i == s.length() - 1)
    {
        sum += value(s[s.length() - 1]);
    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    cout << rom_to_decimal(s) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/