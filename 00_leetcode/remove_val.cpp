#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void remove_dups(vector<int> &nums,int val)
{
    if (nums.size() == 0)
    {
        return;
    }
    int i = 0;
    for (int j = 0; j < nums.size();j++){
        if(nums[j]!=val){
            nums[i] = nums[j];
            i += 1;
        }
    }

        for (auto a : nums)
        {
            cout << a << " ";
        }
}
int main()
{
    vector<int> v;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    remove_dups(v,2);
    return 0;
}

/*
Input:


Output:


Explanation:

*/