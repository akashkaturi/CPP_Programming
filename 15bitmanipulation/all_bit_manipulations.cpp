#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int setBit(int n, int pos){ // to place 1 in place of 0
    return (n | (1<<pos));
}
int clearBit(int n,int pos){ // to replace 1 with 0
    int mask= ~(1<<pos);
    return (n & mask);
}
int updateBit(int n, int pos, int value) // to clear and set bit
{
    int mask= ~(1<<pos);
    n= n & mask;
    return n | (value<<pos); // to set at the particular value we are using value<<pos instead of 1<<pos
}
int main()
{
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(7,1)<<endl;
    cout<<updateBit(5,3,1)<<endl;
    return 0;
}