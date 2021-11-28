#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void all_anagrams(vector<string> v)
{
    unordered_map<string, vector<string>> map;
    //sorting each word and creating a map array for each word, storing anagrams of particular word in separate vector.
    for (int i = 0; i < v.size(); i++)
    {
        string s = v[i];
        sort(s.begin(), s.end());
        map[s].push_back(v[i]);
    }
    //creating new vector to store answers.
    vector<vector<string>> ans(map.size());
    for (auto m : map)
    {
        //accessing individual vector.
        auto v = m.second;
        int idx = 0; //idx because to seprate ans
        for (int i = 0; i < v.size(); i++)
        {

            ans[idx].push_back(v[i]);
        }
        idx++;
    }
    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<string> v;
    string s;
    while (cin >> s)
    {
        v.push_back(s);
    }
    all_anagrams(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/