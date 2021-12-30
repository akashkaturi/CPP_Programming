#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dig(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if ((n % 10) == 3)
    {
        return 1 + dig(n / 10);
    }
    return dig(n / 10);
}
int main()
{
    cout << dig(13333);
    return 0;
}

/*
Input:


Output:


Explanation:

*/