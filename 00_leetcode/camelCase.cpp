#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    string input;
    getline(cin, input);
    int i;
    for (i = 0; i < input.length(); i++)
    {
        if (input[i] != ' ')
        {
            s += input[i];
        }
        else
        {
            break;
        }
    }
    cout << s;
    return 0;
}

/*
Input:
This is the Camel Case

Output:
thisIsTheCameCase

Explanation:

*/