#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n, string s)
{
    if (n == 0)
    {
        return s;
    }
    s = to_string(n % 2) + s;

    return decimalToBinary(n / 2, s);
}
int main()
{
    string s = "";
    cout << decimalToBinary(15, s) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/