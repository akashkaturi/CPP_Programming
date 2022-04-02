#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void negpos(int arr[], int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        while (arr[i] < 0)
        {
            i++;
        }
        while (arr[j] >= 0)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
}
void merge(int *fin, int a[], int b[], int alen, int blen)
{
    int i = 0, j = 0, k = 0;
    while (i < alen && j < blen)
    {
        if (a[i] < b[j])
        {
            fin[k++] = a[i++];
        }
        else
        {
            fin[k++] = b[j++];
        }
    }
    while (i < alen)
    {
        fin[k++] = a[i++];
    }
    while (j < blen)
    {
        fin[k++] = b[j++];
    }
}
int main()
{
    int arr[10] = {1, 3, 5, 7, 9};
    int brr[10] = {2, 4, 6, 8, 10};
    int len = 5;
    int *a = new int[20];
    merge(a, arr, brr, len, len);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

/*
Input:


Output:


Explanation:

*/
