#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortLists(int l1[], int l2[], int n1, int n2)
{

    int i = 0, j = 0, k = 0;
    int new_arr[n1 + n2];
    while (i < n1 && j < n2)
    {
        if (l1[i] < l2[j])
        {
            new_arr[k] = l1[i];
            i++;
            k++;
        }
        else
        {
            new_arr[k] = l2[j];
            j++;
            k++;
        }
    }
    if (i < n1)
    {
        new_arr[k] = l1[i];
        i++;
        k++;
    }
    if (j < n2)
    {
        new_arr[k] = l2[j];
        j++;
        k++;
    }
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << new_arr[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    sortLists(arr1, arr2, n1, n2);

    return 0;
}

/*
Input:


Output:


Explanation:

*/