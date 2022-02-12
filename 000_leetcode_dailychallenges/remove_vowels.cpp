#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string remove_vowels(string s)
{
    string ans;
    vector<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < s.size(); i++)
    {
        if (find(vowels.begin(), vowels.end(), s[i]) == vowels.end())
        {
            ans += s[i];
        }
    }
    return ans;
}
int main()
{
    string s = "Hello world!! Em chesthunnav RA?";
    cout << remove_vowels(s) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/