#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            int a = 'a' + ((s[i] - 'a'+k) % 26);
            char c = (char)a;
            cout << c;
        }
            
    }
        return 0;
}

/*
Input:


Output:


Explanation:

*/