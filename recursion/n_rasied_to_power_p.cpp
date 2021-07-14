#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int power(int n,int p)
{
   if(p==0)
   {
       return 1;
   }
   int prev_num=power(n,p-1);
   return n*prev_num;
}
int main()
{   
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;

    return 0;
}