// Not passed test cases
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void area(unordered_map<int, int> &map, int max_screen)
{
    for (auto i : map)
    {
        if (i.first == max_screen)
        {
            cout << i.first << endl;
            return;
        }
    }
    cout << "no tablet" << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        // unordered_map<int, int> map;
        // int max_screen = INT_MIN;
        // for (int i = 0; i < n; i++)
        // {
        //     int w, h, p;
        //     cin >> w >> h >> p;
        //     if (p <= b)
        //     {
        //         map[w * h] = p;
        //         max_screen = max(w * h, max_screen);
        //     }
        // }
        // area(map, max_screen);
        int max_screen = INT_MIN;

        while (n--)
        {
            int w, h, p;
            cin >> w >> h >> p;
            if (p <= b)
            {
                max_screen = max(max_screen, w * h);
            }
        }
        if (max_screen == INT_MIN)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << max_screen << endl;
        }
    }

    return 0;
}