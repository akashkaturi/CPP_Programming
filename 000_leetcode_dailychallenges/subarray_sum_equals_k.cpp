#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void length_of_continuos_subarray(vector<int> &v, int k)
{
    int ans = 0, sum = 0;
    unordered_map<int, int> m;
    m[0] = 1;

    for (auto &it : v)
    {
        sum = sum + it;

        ans += m[sum - k];
        cout << "Sum: " << sum << " Ans : " << ans << endl;
        m[sum]++;
    }
}
int main()
{
    int k;
    cin >> k;
    int num;
    vector<int> v;
    while (cin >> num)
    {
        v.push_back(num);
    }
    length_of_continuos_subarray(v, k);

    return 0;
}

/*
Input:


Output:


Explanation:

*/