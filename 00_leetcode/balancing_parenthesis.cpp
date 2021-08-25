#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
bool check(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
       else if(!st.empty())
       {
           if(s[i]==')'){
               if(st.top()=='('){
                   st.pop();
               }
               else{
                   break;
               }
           }
           else if (s[i] == ']')
           {
               if (st.top() == '[')
               {
                   st.pop();
               }
               else{
                   break;
               }
           }
           else if (s[i] == '}')
           {
               if (st.top() == '{')
               {
                   st.pop();
               }
               else{
                   break;
               }
           }
           else{
               return 0;
           }
       }
       else{
           st.push(s[i]);
       }
    }
    return st.empty();
}
int main()
{
    string s;
    cin >> s;
    cout << check(s) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/