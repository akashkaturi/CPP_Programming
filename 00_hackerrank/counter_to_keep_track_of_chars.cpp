#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(map<char,int> &m){
    cout << m.size() << endl;
    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}
void counter(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]] += 1;
        // try
        // {
        //     if (m[s[i]])
        //     {
        //         m[s[i]] += 1;
        //     }
        //     else
        //     {
        //         throw s[i];
        //     }
        // }
        // catch (char x)
        // {
        //     m[s[i]] = 1;
        // }
    }
    print(m);
}
int main()
{
    string s;
    getline(cin, s);
    counter(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/