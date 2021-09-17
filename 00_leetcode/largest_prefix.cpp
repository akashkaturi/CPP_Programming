/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
string lar_prefix(vector<string> &strs)
{
    if (strs.size() == 0)
    {
        return "";
    }
    int len = strs[0].length();
    for (int i = 1; i < strs.size(); i++)
    {
        int k = strs[i].length();
        len = min(k, len);
        for (int j = 0; j < len; j++)
        {
            char c = strs[0][j], d = strs[i][j];
            if (c != d)
            {
                len = j;
                break;
            }
        }
    }
    return strs[0].substr(0, len);
}
int main()
{
    string s;
    vector<string> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.push_back(s);
    }
    cout << lar_prefix(st) << endl;
    return 0;
}

/*
Input:
3
fly
flower
fling

Output:
fl

Explanation:
fl is the largest common prefix of the given strings.
*/