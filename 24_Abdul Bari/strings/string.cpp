#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void to_upper(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= abs('a' - 'A');
        }
    }
    cout << s << endl;
}
void to_lower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += abs('a' - 'A');
        }
    }
    cout << s << endl;
}
void count_words(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            count += 1;
        }
    }
    cout << "Number of words in the string are:" << count + 1 << endl;
}
void validate_string(string s)
{
    bool valid = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z') && !(s[i] >= '0' && s[i] <= '9'))
        {
            valid = false;
        }
    }
    if (valid)
    {
        cout << "The String is valid (Valid string contains alhphabets or numbers)" << endl;
        return;
    }
    cout << "Not a valid string (Valid string contains alhphabets or numbers)" << endl;
}
void reverse_string(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout << "Reversed string: " << s << endl;
}
void compare_strings(string s1, string s2)
{
    if (s1 == s2)
    {
        cout << "Both are same strings" << endl;
        return;
    }
    cout << "Not same strings" << endl;
}
void isPalindrome(string s)
{
    string rev = s;
    reverse(s.begin(), s.end());
    if (rev == s)
    {
        cout << "7A. It is a palindrome" << endl;
        return;
    }
    cout << "7A. It's not a palindrome" << endl;
}
void duplicates_in_string(string s)
{
    unordered_map<char, int> map;
    for (auto i : s)
    {
        map[i]++;
    }
    vector<char> ans;
    for (auto i : map)
    {
        if (i.second > 1)
        {
            ans.push_back(i.first);
        }
    }
    string word = "elements are: ";
    if (ans.size() > 0)
    {
        if (ans.size() == 1)
        {
            word = "element is: ";
        }
        cout << "8A. The duplicated " << word << endl;
        for (auto i : ans)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << "8A. There are no duplicated elements" << endl;
    }
}
void find_duplicates_using_bitoperations(string s)
{
    int hash[26];
}
void check_two_strings_are_anagram(string s1, string s2)
{
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    for (auto i : s1)
    {
        map1[i]++;
    }
    for (auto i : s2)
    {
        map2[i]++;
    }
    if (map1 == map2)
    {
        cout << "10A. The two strings are anagrams" << endl;
        return;
    }
    cout << "10A. The two strings are not anagram." << endl;
}
void anagrams(string s1, string s2)
{
}
void permutations(string s, int l, int h)
{
    if (l == h)
    {
        cout << s << endl;
        return;
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(s[i], s[l]);
            permutations(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s = "az AZ19";
    cout << "Available functions are: " << endl;
    cout << "1. to_upper(s)" << endl;
    cout << "2. to_lower(s)" << endl;
    cout << "3. count_words(s)" << endl;
    cout << "4. validate_string(s)" << endl;
    cout << "5. reverse_string(s)" << endl;
    cout << "6. compare_strings(s1,s2)" << endl;
    cout << "7. isPalindrome(s)" << endl;
    cout << "8. duplicates_in_string(s)" << endl;
    cout << "9. find_duplicates_using_bitoperations(s)" << endl;
    cout << "10. check_two_strings_are_anagram(s)" << endl;
    cout << endl;
    check_two_strings_are_anagram("akashkaturi", "katuriakash");
    permutations("abc", 0, 2);
    cout << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/
