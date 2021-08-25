#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void counter(string s)
{
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        try
        {
        
                m[s[i]] += 1;
            
            throw s[i];
        }
        catch (char x)
        {
            m[s[i]] = 1;
        }
    }
    for(auto ele:m){
        cout << ele.first << " " << ele.second << endl;
    }
}
int main()
{
    string s;
    cin >> s;
    counter(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/