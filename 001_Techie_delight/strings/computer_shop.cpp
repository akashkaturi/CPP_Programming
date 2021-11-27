#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void program(string s, int k)
{
    int count = 0;
    unordered_set<char> visited;
    unordered_set<char> allocated;
    for (int i = 0; i < s.length(); i++)
    {
        if (visited.find(s[i]) == visited.end())
        {
            visited.insert(s[i]);
            if (allocated.size() < k)
            {
                allocated.insert(s[i]);
            }
            else
            {
                count++;
            }
        }
        else
        {
            visited.erase(s[i]);
            allocated.erase(s[i]);
        }
    }
    cout << count << endl;
}
int main()
{
    string s = "ABCDDCEFFEBGAG";
    program(s, 3);
    return 0;
}

/*
Input:


Output:


Explanation:

*/