#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void conc_rev(string s1, string s2)
{
    string final = s1 + s2;
    reverse(final.begin(), final.end());
    cout << final;
}
int main()
{
    string s1 = "Akash", s2 = "Katuri";
    conc_rev(s1, s2);

    return 0;
}

/*
Input:


Output:


Explanation:

*/