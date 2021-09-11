#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, n;
    int k = 5;
    cout << k++ + ++k<< endl;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    n = a[++i];
    cout << i<<endl;
    n += i++;
    cout << i<<endl;
    n += a[i++];
    cout << i << endl;
    n += a[i];
    cout << i << endl;
    cout << n << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/