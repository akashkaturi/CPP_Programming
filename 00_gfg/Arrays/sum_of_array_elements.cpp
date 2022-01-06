#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum_of_array(vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int main()
{
    int num;
    vector<int> v;
    while (cin>>num)
    {
        v.push_back(num);
    }
    cout << sum_of_array(v)<<endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/