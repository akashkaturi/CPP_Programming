#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void funB(int n);
void funA(int n)
{
    if (n > 0)
    {
        cout << "funA: " << n << endl;
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        cout << "funB: " << n << endl;
        funA(n / 2);
    }
}
int main()
{ 
    int n = 20;
    funA(n);
    return 0;
}

/*
Input:


Output:


Explanation:

*/