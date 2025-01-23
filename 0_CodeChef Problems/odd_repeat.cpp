// Not passed test cases
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solution(long long n, long long k, long long s)
{
    int sol = s - (n * n);
    sol = sol / (k - 1);
    return sol;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, s;
        cin >> n >> k >> s;
        int ans = 0;
        cout << solution(n, k, s) << endl;
        for (int i = (n * 2) - 1; i > 0; i -= 2)
        {
            s -= i;
        }

        for (int i = (n * 2) - 1; i > 0; i -= 2)
        {
            if (s - (k - 1) * i == 0)
            {
                ans = i;
            }
        }
    }

    return 0;
}