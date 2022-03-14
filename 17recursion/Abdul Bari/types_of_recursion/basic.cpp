#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void f1(int n)
{
    if (n > 0)
    {
        static int k = 0;
        cout << n << endl;
        k++;
        f1(n - 1); 
        cout << n*k << endl;
    }
}
// If the last statement of a function is recursive call then we can call that as tail recursion.
// if any operation is performed after tail recursion then it can only be performed at the end.
// but if any operation is present after tail recursion then we cannot call it as tail recursion.
int main()
{
    int n = 5;
    f1(n);
    return 0;
}

/*
Input:


Output:


Explanation:

*/