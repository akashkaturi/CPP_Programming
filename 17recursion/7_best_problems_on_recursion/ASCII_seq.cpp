#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ASCII(string s, string ans)
{
    if(s.length()==0){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    int n = ch;
    ASCII(ros, ans);
    ASCII(ros, ans+ch);
    ASCII(ros, ans+to_string(n));

}
int main()
{
    ASCII("AB", "");
    return 0;
}

/*
Input:


Output:


Explanation:

*/