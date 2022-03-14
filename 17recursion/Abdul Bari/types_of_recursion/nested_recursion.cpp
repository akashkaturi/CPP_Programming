#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int nested_recursion(int n)
{
    if (n > 100)
    {
        return (n - 10);
    }
    else
    {
        return nested_recursion((nested_recursion(n + 11)));
    }
}
int main()
{
    int n = 95;
    cout << nested_recursion(n) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/