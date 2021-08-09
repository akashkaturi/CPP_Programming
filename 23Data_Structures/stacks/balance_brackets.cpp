#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool balance(string s, int n)
{
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
        }
        else{
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "([])";
    int n = s.length();
    if (balance(s, n))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not balanced" << endl;
    }
    return 0;
}