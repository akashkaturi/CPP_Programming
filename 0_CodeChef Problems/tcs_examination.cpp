// Not passed test cases
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int dsa1, toc1, dm1;
        cin >> dsa1 >> toc1 >> dm1;
        int dsa2, toc2, dm2;
        cin >> dsa2 >> toc2 >> dm2;
        bool player1 = false;
        bool player2 = false;
        int sum1 = dsa1 + toc1 + dm1;
        int sum2 = dsa2 + toc2 + dm2;
        if (sum1 > sum2)
        {
            cout << "Dragon" << endl;
        }
        else if (sum1 < sum2)
        {
            cout << "Sloth" << endl;
        }
        else if (sum1 == sum2 && dsa1 == dsa2 && toc1 == toc2 && dm1 == dm2)
        {
            cout << "Tie" << endl;
        }
        else if (sum1 == sum2)
        {
            if (dsa1 > dsa2)
            {
                cout << "dragon" << endl;
            }
            else if (dsa1 < dsa2)
            {
                cout << "sloth" << endl;
            }
            else if (dsa1 == dsa2 && toc1 > toc2)
            {
                cout << "dragon" << endl;
            }
            else if (dsa1 == dsa2 && toc1 < toc2)
            {
                cout << "sloth" << endl;
            }
            else
            {
                cout << "tie" << endl;
            }
        }
    }

    return 0;
}