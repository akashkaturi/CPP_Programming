// Not passed test cases
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> map;
        for(auto i:arr){
            map[i]++;
        }
        int m=0;
        for(auto i:map){
            m=max(i.second,m);
        }

        if(m<=(n+1)/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}