#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int closingBracketsIndex(string s, int k)
{
    if (s[k] != '[')
    {
        return -12;
    }

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[')
        {
            st.push('[');
        }
        else if (s[i] == ']')
        {
            st.pop();
            if (st.empty())
            {
                return i;
            }
        }
    }
    return -10;
}
int main()
{
    string s = "A[B[CD]E]";
    int k = 3;
    cout << closingBracketsIndex(s, k);
    return 0;
}

/*
Input:


Output:


Explanation:

*/