#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void run_length_encode(string s)
{
    int count = 0;
    char c;
    int i = 0;
    string result = "";
    for (i = 0; i < s.length(); i++)
    {
        c = s[i];
        count++;
        if (s[i] != s[i + 1])
        {
            // cout << s[i] << count;
            result += s[i] + to_string(count);
            count = 0;
        }
    }
    cout << result << endl;
}
int main()
{
    string s = "AAAAWWWWWBBBBBBAAAAACCCCCCOOOOOOOPPPPP";
    run_length_encode(s);

    return 0;
}

/*
Input:


Output:


Explanation:

*/