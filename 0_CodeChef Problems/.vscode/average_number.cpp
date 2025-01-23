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
        int n,k,v;
        cin>>n>>k>>v;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        for(auto i:arr){
            sum+=i;
        }   
        long long ans=((v*(n+k))-sum)/k;
        int final_ans = ((v * (n + k)) - sum) % k;
        if(ans<=0 || final_ans){
            cout<<-1<<endl;
        } 
        else{
            cout<<ans<<endl;
        }


    }

    return 0;
}