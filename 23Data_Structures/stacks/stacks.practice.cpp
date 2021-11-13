#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_string(string s)
{
    stack<string> st;
    for (int i = 0; i <= s.size(); i++)
    {
        string word = "";

        while (s[i] != ' ' && i < s.size())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
void insertAtBottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(topElement);
}
void reverse_stack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int topElement = st.top();
    st.pop();
    reverse_stack(st);
    insertAtBottom(st, topElement);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse_stack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    // string s = "My name is akash";
    // reverse_string(s);

    return 0;
}