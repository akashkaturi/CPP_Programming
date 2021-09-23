#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string pos = s.substr(1);
    reverse(pos);
    cout << s[0];
}
int main()
{
    string a = "akash";
    // reverse(a);

    int pos = a.find('s');
    cout << a.substr(pos);
    cout << pos << endl;

    return 0;
}
