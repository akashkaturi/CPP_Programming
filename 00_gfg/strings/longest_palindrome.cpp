#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void longest_palindrome(string s1)
{
    int start = 0, end = 1;
    for (int i = 1; i < s1.length(); i++)
    {
        int low = i - 1;
        int high = i;
        while (low >= 0 and high < s1.length() && s1[low] == s1[high])
        {
            cout << "High-" << high << " Low- " << low << endl;
            cout << "Start: " << start << " End: " << end << endl;
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
        low = i - 1;
        high = i + 1;
        while (low >= 0 and high < s1.length() && s1[low] == s1[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
    }
    cout << s1.substr(start, end + 1);
}
int main()
{
    string s = "aaaabbaaa";
    longest_palindrome(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/