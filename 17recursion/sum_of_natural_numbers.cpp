#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum_of_natural_numbers(int n)
{
    if (n <=1)
    {
        return n;
    }
    return n + sum_of_natural_numbers(n - 1);
}
int main()
{
    int n = 10;
    cout << sum_of_natural_numbers(n) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/