#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sieve_of_eratosthenes(int n)
{
    int arr[100000]={0};
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve_of_eratosthenes(n);
    return 0;
}