#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stack>
using namespace std;
int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;

            case '-':
                st.push(op1 - op2);
                break;

            case '*':
                st.push(op1 * op2);
                break;

            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(op1 ^ op2);
                break;

            default:
                break;
            }
            cout << "hello";
        }
    }
    return 0;
}
int main()
{
    string k = "123*";
    cout << k[3] - '0';

    return 0;
}