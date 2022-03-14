#include <iostream>
#include <bits/stdc++.h>
using namespace std;
static int answer = 1;
void factorial(int n)
{
    if (n == 0)
    {
        answer = 1;
    }
    if (n > 1)
    {
        factorial(n - 1);
        answer = answer * n;
    }
}
int main()
{
    int n = 0;
    factorial(3);
    cout << answer << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/