#include<iostream>
using namespace std;
int main()
{   
    int i=1,j=2,k=3;
    int y=i-- - j-- - k--;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<y<<endl;
    int l=10,m=20;k;
    k=l-- - l++ + --m - ++m + --l - m-- + ++l - m++;
    cout<<k<<endl;
    return 0;
}