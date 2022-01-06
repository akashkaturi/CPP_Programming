/*
You are given a string containing characters  and  only. Your task is to change it into a string such that there are no matching adjacent characters. To do this, you are allowed to delete zero or more characters in the string.

Your task is to find the minimum number of required deletions.

Example

Remove an  at positions  and  to make  in  deletions.

Function Description

Complete the alternatingCharacters function in the editor below.

alternatingCharacters has the following parameter(s):

string s: a string
Returns

int: the minimum number of deletions required
Input Format

The first line contains an integer , the number of queries.
The next  lines each contain a string  to analyze.

Constraints

Each string  will consist only of characters  and .
Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
Sample Output

3
4
0
0
4
*/
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int alter(string s)
{
    long i = 0;
    long j = 1;
    long count = 0;
    char comp = s[0];
    while (i < s.length() && j < s.length())
    {
        if (s[j] >= comp)
        {
            count++;
            j++;
        }
        else
        {
            i = j;
            comp = s[i];
            j++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << alter(s) << endl;
    }
    cout << "hello ";
    return 0;
}

/*
Input:


Output:


Explanation:

*/