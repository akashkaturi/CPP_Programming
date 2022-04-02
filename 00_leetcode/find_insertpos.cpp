m#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int pos;
    if (target == 0)
    {
        return 0;
    }
    else if (target > nums[nums.size() - 1])
    {
        return nums.size();
    }
    else
    {

        for (int i = 0; i < nums.size(); i++)
        {

            if (target == nums[i])
            {
                pos = i;
            }
            else if (target > nums[i] && target < nums[i + 1])
            {
                pos = i + 1;
            }
        }
        return pos;
    }
}
int main()
{
    vector<int> v;
    int target;

    int n;
    cin >> target;
    while (cin >> n)
    {
        v.push_back(n);
    }
    
    cout<<search(v, target)<<endl;
    for(auto at:v){
        cout << at << endl;
    }
    return 0;
}

/*
Input:


Output:


Explanation:

*/