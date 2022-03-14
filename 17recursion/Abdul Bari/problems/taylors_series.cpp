#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int taylors_series(int x, int n)
{
    static int p = 1, f = 1;
    static double r = 0;
    if (n == 0)
    {
        return 1;
    }
    r = taylors_series(x, n - 1);
    p = p * x;
    f = f * (n);
    return r + p / f;
}
int horners_formula(int x, int n)
{
    static int s = 1;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x * s / n;
    return horners_formula(x, n - 1);
}
int main()
{
    int x = 4, n = 4;
    cout << taylors_series(x, n) << endl;
    cout << horners_formula(x, n) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/