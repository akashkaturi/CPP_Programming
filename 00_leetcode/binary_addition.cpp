#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string binary_add(string a, string b)
{
    string ans = "";
    int i = a.length() - 1, carry = 0, j = b.length() - 1;
    while (i >= 0 || j >= 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i] - '0';
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
        }
        carry = sum > 1 ? 1 : 0;
        ans += to_string(sum % 2);
        i--;
        j--;
    }
    if (carry)
    {
        ans += to_string(carry);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    string a = "1";
    string b = "11";
    cout << binary_add(a, b);
    return 0;
}

/*
Input:


Output:


Explanation:

*/