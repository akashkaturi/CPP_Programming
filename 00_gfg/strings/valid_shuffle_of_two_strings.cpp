#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void valid_shuffle(string s1, string s2, string res)
{

    int l1 = s1.length();
    int l2 = s2.length();
    int lr = res.length();
    if (l1 + l2 != lr)
    {
        cout << "None" << endl;
    }
    else
    {
        int f = 0;
        int i = 0, j = 0, k = 0;
        while (k < lr)
        {
            if (s1[i] == res[k])
            {
                i++;
            }
            else if (s2[j] == res[k])
            {
                j++;
            }
            else
            {
                f = 1;
                break;
            }
            k++;
        }
        if (i < l1 || j < l2)
        {
            cout << "No";
        }
        else
        {
            cout << "yes";
        }
    }
}
int main()
{
    string s1, s2, res;
    cin >> s1 >> s2 >> res;
    valid_shuffle(s1, s2, res);
    return 0;
}

/*
Input:


Output:


Explanation:

*/