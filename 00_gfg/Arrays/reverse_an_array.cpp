#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse_an_array(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    int num;
    vector<int> v;
    while (cin >> num)
    {
        /* code */
        v.push_back(num);
    }
    reverse_an_array(v);

    return 0;
}

/*
Input:


Output:


Explanation:

*/