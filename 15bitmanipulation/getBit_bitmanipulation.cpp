#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}
int setBit(int n, int pos)
{
    int mask = (1 << pos);
    return n | mask;
}
int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return n & mask;
}
//update bit is nothing but combination of clearbit and setbit
//clear the given position and update it with the value<<pos.
int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return n | (value << pos);
}
int main()
{
    int n, pos = 0;
    cout << getBit(5, pos) << endl;
    cout << setBit(5, pos) << endl;
    cout << clearBit(5, pos) << endl;
    cout << updateBit(5, 2, 0) << endl;
    //5= 1 0 1
    return 0;
}