#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    if (s.length() == 1)
    {
        return true;
    }
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool recursive_method(string s, int low, int high)
{
    if (low >= high)
    {
        return true;
    }
    if (s[low] != s[high])
    {
        return false;
    }
    return recursive_method(s, low + 1, high - 1);
}
int main()
{
    string s = "nitin";
    cout << palindrome(s) << endl;
    cout << recursive_method(s,0,s.length()-1) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/