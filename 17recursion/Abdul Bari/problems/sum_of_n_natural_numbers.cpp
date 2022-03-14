#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// using void type function.
static int answer = 0;
void sum(int n)
{
    if (n < 1)
    {
        return;
    }
    answer += n;
    sum(n - 1);
}
// using return int type function.
int sum_(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + sum_(n - 1);
}
int for_loop(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n = 1000;
    sum(n);
    cout << "Void type answer: " << answer << endl;
    cout << "Int type answer: " << sum_(n) << endl;
    cout << "For Loop answer: " << for_loop(n) << endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/