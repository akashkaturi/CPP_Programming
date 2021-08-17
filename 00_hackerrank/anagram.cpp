/*
A student is taking a cryptography class and has found anagrams to be very useful. Two strings are anagrams of each other if the first
 string's letters can be rearranged to form the second string. In other words, both strings must contain the same exact letters in the same exact frequency.
  For example, bacdc and dcbac are anagrams, but bacdc and dcbad are not.
The student decides on an encryption scheme that involves two large strings. The encryption is dependent on the minimum number of character 
deletions required to make the two strings anagrams. Determine this number.

Given two strings,a and b , that may or may not be of the same length, determine the minimum number of character deletions 
required to make a and b anagrams. Any characters can be deleted from either of the strings.

Example


Delete  from  and  from  so that the remaining strings are  and  which are anagrams. This takes  character deletions.

Function Description

Complete the makeAnagram function in the editor below.

makeAnagram has the following parameter(s):

string a: a string
string b: another string
Returns

int: the minimum total characters that must be deleted
Input Format

The first line contains a single string, .
The second line contains a single string, .

Constraints

The strings  and  consist of lowercase English alphabetic letters, ascii[a-z].

Sample Input:
cde
abc

Sample Output:
4

*/
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int s1[26] = {0}, s2[26] = {0};

    for (int i = 0; i < a.length(); i++)
    {
        s1[a[i] - 'a']++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        s2[b[i] - 'a']++;
    }
    int s = 0;
    // for (int i = 0; i < 26; i++)
    // {

    //     cout << s1[i] << " ";

    //     cout << s2[i] << " ";

    //     cout << endl;
    // }
    for (int i = 0; i < 26; i++)
    {
        s = s + abs(s1[i] - s2[i]);
    }
    cout << s;

    return 0;
}

/*
Input:


Output:


Explanation:

*/