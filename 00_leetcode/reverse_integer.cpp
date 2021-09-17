#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long reverse(long n){
    int rev = 0;
    while(n!=0){
        int digit = rev % 10;
        if (rev > INT_MAX / 10 ||(digit>INT_MAX%10 && rev==INT_MAX)){
            return 0;
        }
        if (rev < INT_MIN / 10 || (digit > INT_MIN % 10 && rev == INT_MIN))
        {
            return 0;
        }
        rev = rev * 10 + n%10;
        n /= 10;
    }
    return rev;
}
int main()
{
    long n;
    cin >> n;
    cout<<reverse(n)<<endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/