#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    string s;
    cin >> s;
    int n = s.length();
    int first = 0;
    int last = s.length() - 1;
    for (int i = 0; i < s.length() - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == first || j == last)
            {
                cout << s[j];
            }
            else
            {
                cout << " ";
            }
        }
        first++;
        last--;
        cout << endl;
    }
    int revf = s.length() / 2;
    int revl = s.length() / 2;
    for (int i = 0; i < s.length() - 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == revf || j == revl)
            {
                cout << s[j];
            }
            else
            {
                cout << " ";
            }
        }
        revf--;
        revl++;
        cout << endl;
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/