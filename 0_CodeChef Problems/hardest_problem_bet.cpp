#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        if (min(s1, min(s2, s3)) == s1)
        {
            cout << "Draw" << endl;
        }
        else if (min(s2, min(s1, s3)) == s2)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
    }

    return 0;
}