#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
n = 19 - 10011
first step n = 19 & 18 , 10011 & 10010 = 10010 =17 count = 1
second step n = 18 & 17 , 10010 & 10001 = 10000 = 16 count =2
third step n = 17 & 16 , 10001 & 10000 = 10000 = 16 count =3
final and terminating step n = 16 & 15 , 10000 & 01111 = 00000 = 0
*/
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;

    return 0;
}