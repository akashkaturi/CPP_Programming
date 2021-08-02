#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void primefactor(int n)
{
    int spf[100]={0}; //spf array is initialized with 0's
    for(int i=2;i<=n;i++)
    {
        spf[i]=i; // fill the spf array with numbers starting from 2, excluding 1,0 because they donot come under prime factors
    }

    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i) // if the array is already filled with the i values
        {
            for(int j=i*i;j<=n;j+=i) // 
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    
    return 0;
}