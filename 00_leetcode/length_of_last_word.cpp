#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void last_word_len(string s)
{
    int i = s.length() - 1, j = 0;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        j++;
        i--;
    }
    cout << j << endl;
}
int main()
{
    string s;
    getline(cin, s);
    last_word_len(s);
    return 0;
}

/*
Input:


Output:


Explanation:

*/