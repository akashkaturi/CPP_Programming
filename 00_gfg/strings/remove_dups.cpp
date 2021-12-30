#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void remove_duplicates(string s)
{
    unordered_map<char, int> map;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (map.find(s[i]) == map.end())
        {
            ans += s[i];
        }
        map[s[i]] += 1;
    }
    cout << ans;
}
int main()
{
    string s = "geeksforgeeks";
    unordered_map<char, int> map;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     map[s[i]] += 1;
    // }
    // for (auto it = map.begin(); it != map.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    remove_duplicates(s);

    return 0;
}

/*
Input:


Output:


Explanation:

*/