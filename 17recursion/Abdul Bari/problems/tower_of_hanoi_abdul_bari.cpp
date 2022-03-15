#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void tower(int n, char a, char b, char c)
{
    // base - source to helper using destination tower
    // then - helper to destination using source.
    if (n == 0)
    {
        return;
    }
    tower(n - 1, a, c, b); //here source is a destination is c and helper is b
    cout << "Move from: " << a << " to " << c << endl;
    tower(n - 1, b, c, a); // here the source is b destnation is c and helper is a
}
int main()
{
    tower(5, 'a', 'b', 'c');

    return 0;
}

/*
Input:


Output:


Explanation:

*/