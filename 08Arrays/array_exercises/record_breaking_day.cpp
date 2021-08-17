// time complexity < n^2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    int a[n];
    int curr_max = INT_MIN;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    else
    {
        for (i = 0; i < n; i++)

        { //a[i]> curr_max and greater than prev element.
            if (a[i] > curr_max && a[i] > a[i + 1])
            {
                ans++;
            }

            curr_max = max(curr_max, a[i]);
            cout << curr_max << " ";
        }
        cout << endl;
    }
    cout << ans << endl;
    return 0;
}

/*
Input:
6
2 1 3 5 4 6

Output:
2 2 3 5 5 6 
2

Explanation:
The number of record breaking days are 2, which are 2 and 5

*/