#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int ans[N];
int main()
{
   
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]]++;
    }
    int k;
    cin >> k;
    cout << ans[k] << endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/