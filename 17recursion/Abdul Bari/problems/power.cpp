#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 2)
    {
        return m;
    }
    return m * power(m, n - 1);
}
int fast_power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return fast_power(m * m, n / 2);
    }
    return m * fast_power(m, n - 1);
}
int main()
{

    int m = 2, n = 10;
    cout << power(m, n) << endl;
    cout << fast_power(m, n) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/