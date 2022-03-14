#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fibonaci(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibonaci(n - 1) + fibonaci(n - 2);
}
int main()
{
    int n=5;
    cout << fibonaci(n) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/