#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <math.h>
using namespace std;
int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infix_to_postfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A') && s[i] <= 'Z') // all the characters that are going into the res should be only alphabet characters
        {
            res += s[i]; //adding alhpabet characters to result string
        }
        else if (s[i] == '(') // if we have a opeinin bracket
        {
            st.push(s[i]); // we have to push it into the stack
        }
        else if (s[i] == ')') // closed bracket
        {
            while (!st.empty() && st.top() != '(') // we have to run a loop on conditions stack is not empty and top element of the stack is not equal to ')'
            {
                res += st.top(); //we have to add all the operators into the result string
                st.pop();        // pop them after adding.
            }
            if (!st.empty()) //if stack is not empty, i.e it contains only open bracket '('
            {
                st.pop(); //then remove opening bracket
            }
        }
        else // if two operators are going to stack we have to check a condtion that top operator have greater precedence than current operator or not
        {
            while (!st.empty() && prec(st.top()) >= prec(s[i])) //if top element has greater precedence then pop it out.
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]); // push the less precedent operator into the stack.
        }
    }
    while (!st.empty()) //pop out the remaining elements in the stack
    {
        res += st.top();
        st.pop();
    }
    return res; //finally return the result
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout << infix_to_postfix(s) << endl;
    return 0;
}