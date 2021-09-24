#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string add(string f, string s)
{
    int n1 = f.length() - 1;
    int n2 = s.length() - 1;
    string ans = "";
    int sum = 0;
    int carr = 0;
    while (n1 >= 0 && n2 >= 0)
    {
        sum += int(f[n1]) + int(f[n2])+carr;
        if (sum <= 1 )
        {
            ans += sum;
            n1--;
            n2--;
        }
        else
        {
            carr = 1;
            ans += '0';
            n1--;
            n2--;
        }
    }
    return ans;
}
int main()
{
    string f,s;
    cin >> f >> s;
    cout << add(f, s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/