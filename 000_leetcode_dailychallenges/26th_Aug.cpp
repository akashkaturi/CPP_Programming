/*
Given a non-negative integer c, decide whether there're two integers a and b such that a^2 + b^2 = c.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool check(int c){
    bool k = false;
    for (int i = 0; i <= sqrt(c); i++)
    {
        double b = sqrt(c - i * i);
        if(b==(int)b){
            k = true;
            return k;
        }
    }
    return k;
}
int main()
{
    int num;
    cin >> num;
    cout<<check(num)<<endl;
    cout << double(num) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/