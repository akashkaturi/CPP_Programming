
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int divisors(int n,int a, int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c3;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisors(n,a,b)<<endl;
    
    return 0;
}
//https://www.youtube.com/watch?v=IW4hJEgZLWI&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=37