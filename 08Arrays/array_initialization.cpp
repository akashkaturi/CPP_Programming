#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    int *b = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cout << &b[i] << endl;
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/