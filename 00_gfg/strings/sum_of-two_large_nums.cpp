#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sum_of_two_nums(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carr = 0, sum = 0;
    int dig = 0;
    string ans = "";
    while (i >= 0 && j >= 0)
    {
        sum = (s1[i--] - '0') + (s2[j--] - '0') + carr;
        carr = sum / 10;
        ans = to_string(sum % 10) + ans;
        // sum = 0;
    }
    // cout << i<<"-"<<j<<endl;

    while (i >= 0)
    {
        dig = (s2[j] - '0') + carr;
        carr = dig / 10;
        ans = to_string(dig % 10) + ans;
        i--;
    }
    while (j >= 0)
    {
        int dig = (s2[j] - '0') + carr;
        carr = dig / 10;
        ans = to_string(dig) + ans;
        j--;
    }
    if (carr)
    {
        ans = to_string(carr) + ans;
    }

    cout << ans << endl;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    sum_of_two_nums(s1, s2);
    return 0;
}

/*
Input:


Output:


Explanation:

*/