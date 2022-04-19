#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_string(string &s)
{
    reverse(s.begin(), s.end());
}
int main()
{
    string n = "akash";
    reverse_string(n);
    cout << n;
    return 0;
}

/*
Input:


Output:


Explanation:

*/
