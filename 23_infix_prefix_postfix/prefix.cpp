#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <stack>
using namespace std;
int prefixEvaluation(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--) //take the elements in reverse order, because in prefix we cannot contain numbers at the staring of the string, and there will be only operands and no numbers to get popped out from the stack
    {
        if (s[i] >= '0' && s[i] <= '9') // to check whether the char of string is a number and is bewteen 0 and 9
        {
            st.push(s[i] - '0'); // if true push the converted number to the stack. string is converted to integer by s[i]-'0'
        }
        else // if we encounter operand
        {
            int op1 = st.top(); // pop out the top element
            st.pop();
            int op2 = st.top(); // pop out the second element from the top
            st.pop();

            switch (s[i]) // and based on the operation do the required operations
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
        }
    }
    return st.top();
}
int main()
{
    string k = "-+7*45+20";
    cout << prefixEvaluation(k) << endl;
    return 0;
}