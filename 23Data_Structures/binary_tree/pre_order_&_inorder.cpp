#include <iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int count = 0;
    int max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(st.empty()){
            st.push(s[i]);
        }
        if(s[i]=='I' and s[i]<st.top())
    }

        return 0;
}

/*
Input:


Output:


Explanation:

*/