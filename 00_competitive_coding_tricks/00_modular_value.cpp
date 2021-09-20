#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
int main()
{
    
    int n = 0;
    cin >> n;
    long long fact = 1;
    for (int i = 2;i<n;i++) {
        fact = (fact * i)%M;
    }
    cout << fact<<endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/