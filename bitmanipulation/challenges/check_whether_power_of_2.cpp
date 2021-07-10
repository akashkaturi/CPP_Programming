#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n!=0) && (n&n-1)==0) // suppose 8 and 7...8-> 1000 , 7-> 0111, and 4 ->0100 , 3 -> 0011 n & n-1 is always equal to 0 when n is power of 2.
    {
        cout<<"Power of 2"<<endl;;
    }
    else
    {
        cout<<"not a power"<<endl;
    }
    
    return 0;
}