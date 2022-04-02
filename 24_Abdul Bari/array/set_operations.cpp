#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void union_(vector<int> v, vector<int> v2)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < v.size() && j < v2.size())
    {
        if (v[i] < v2[j])
        {
            ans.push_back(v[i++]);
        }
        else if (v2[j] < v[i])
        {
            ans.push_back(v2[j++]);
        }
        else
        {
            ans.push_back(v[i++]);
            j++;
        }
    }
    while (i < v.size())
    {
        ans.push_back(v[i++]);
    }
    while (j < v2.size())
    {
        ans.push_back(v2[j++]);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
};
void intersection(vector<int> v, vector<int> v2)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    unordered_map<int, int> map;
    for (auto i : v)
    {
        map[i] = 1;
    }
    for (auto i : v2)
    {
        if (map.find(i) != map.end())
        {
            ans.push_back(i);
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
void a_minus_b(vector<int> v, vector<int> v2)
{
    vector<int> ans;
    unordered_map<int, int> map;
    for (auto i : v2)
    {
        map[i] = 1;
    }
    for (auto i : v)
    {
        if (map.find(i) == map.end())
        {
            ans.push_back(i);
        }
    }
    for (auto i : v)
    {
        if (map.find(i) != map.end())
        {
            ans.push_back(i);
        }
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
int main()
{
    unordered_set<int> set;
    vector<int> v = {1, 2, 3, 4, 5, 7};
    for (int i = 0; i < v.size(); i++)
    {
        set.insert(v[i]);
    }
    vector<int> v2 = {4, 5, 6, 7, 8, 9};
    cout << "Union: " << endl;
    union_(v, v2);
    cout << endl;
    cout << "Intersection: " << endl;
    intersection(v, v2);
    cout << endl;
    cout << "A minus B: " << endl;
    a_minus_b(v, v2);
    return 0;
}

/*
Input:


Output:


Explanation:

*/
