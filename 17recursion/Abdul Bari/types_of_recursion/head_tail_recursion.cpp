#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void head_recursion(int n)
{
    if (n > 0)
    {
        head_recursion(n - 1);
        cout << n << " ";
    }
}
void tail_recursion(int n)
{
    if (n > 0)
    {

        cout << n << " ";
        tail_recursion(n - 1);
    }
}
int main()
{
    int n = 5;
    cout << "Head Recursion: ";
    head_recursion(n);
    cout << endl;
    cout << "Tail Recursion: ";
    tail_recursion(n);
    return 0;
}

/*
Input:


Output:


Explanation:

*/