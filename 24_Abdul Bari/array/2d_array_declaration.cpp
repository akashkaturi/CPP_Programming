#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "A Array" << endl;

    int *A[3];
    A[0] = new int[3];
    A[1] = new int[3];
    A[2] = new int[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << "B Array" << endl;
    int **B;
    B = new int *[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    cout << "C Array" << endl;
    int C[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/
