#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution(vector<int> &A)
{
    int n = 1e6+ 10;
    int hash[n] = {0};
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        hash[A[i]]=1;
    }

    for(count=1;count<n;count++){
        if(hash[count]==0){
            cout<<count;
            return;
        }
    }
    // cout<<count;
    // return;
    // for (auto x : A)
    // {
    //     cout << x << endl;
    // }
}
int main()
{
    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    solution(v);
    return 0;
}

/*
Input:


Output:


Explanation:

*/