#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void second(vector<int> v)
{
    int f = INT_MIN;
    int s = INT_MIN;
    for (int i = 0; i < v.size();i++){
       if(v[i]>f){
           s = f;
           f = v[i];
       }
       else if(v[i]<f && v[i]>s){
           s = v[i];
       }
    }
    if(s==INT_MIN){
        cout << "No second largest value" << endl;
        return;
    }
    cout << s << endl;
}
int main()
{
    vector<int> v;
    int n;
    while (cin >> n){
        v.push_back(n);
    }
    second(v);
    return 0;
}

/*
Input:


Output:


Explanation:

*/