#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int combination(int n, int r)
{
    double ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}
int pascal_triangle_combination(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    return pascal_triangle_combination(n - 1, r - 1) + pascal_triangle_combination(n - 1, r);
}
int main()
{
    int n = 5;
    int r = 3;
    cout << combination(n, r) << endl;
    cout << pascal_triangle_combination(n, r) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/