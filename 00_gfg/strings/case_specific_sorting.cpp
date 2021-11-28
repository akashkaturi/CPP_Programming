#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void case_spec(string s)
{
    vector<char> cap;
    vector<char> small;
    string result = "";
    for (int i = 0; i < s.size(); i++)

    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cap.push_back(s[i]);
        }
        else
        {
            small.push_back(s[i]);
        }
    }
    sort(cap.begin(), cap.end());
    sort(small.begin(), small.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (!cap.empty())
            {
                char k = cap[0];
                result += k;
                cap.erase(cap.begin());
            }
        }
        else
        {
            if (!small.empty())
            {
                char k = small[0];
                result += k;
                small.erase(small.begin());
            }
        }
    }
    cout << result;
}
int main()
{
    string s = "hytreCDAsdfTYR";
    case_spec(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/