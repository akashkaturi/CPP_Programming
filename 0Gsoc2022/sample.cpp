#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int kids_bags[2];
        for (int i = 0; i < 2; i++)
        {
            cin >> kids_bags[i];
        }
        int candies[kids_bags[1]];
        for (int i = 0; i < kids_bags[1]; i++)
        {
            /* code */
            cin >> candies[i];
        }
        for (auto a : candies)
        {
            cout << a << ' ';
        }
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/