#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string convertToRoman(int num)
{
    string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int nums[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    // int m = num;
    int i = 12;
    for (i = 12; i >= 0; i--)
    {
        while (num >= nums[i])
        {
            result = result + romans[i];
            num = num - nums[i];
        }
    }
    return result;
}
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
// adding/subtracting  until n-1th element in the string.
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
    //Adding last element
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
    cout << convertToRoman(8) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/