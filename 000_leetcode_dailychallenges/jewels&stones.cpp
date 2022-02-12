#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int stones_jewels(string jewels, string stones)
{
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    for (auto i : jewels)
    {
        map1[i]++;
    }
    int count = 0;
    for (auto i : stones)
    {
        if (map1.find(i) != map1.end())
        {
            count++;
        }
    }

    return count;
}
int main()
{
    string stones, jewels;
    cin >> stones >> jewels;
    cout << stones_jewels(jewels, stones);
    return 0;
}

/*
Input:


Output:


Explanation:

*/