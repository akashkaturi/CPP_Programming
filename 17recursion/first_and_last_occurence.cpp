#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int first_occurence(int arr[], int n, int target, int i)
{

    if (i == n)
    {
        return -1;
    }
    if (arr[i] == target)
    {
        return i;
    }
    return first_occurence(arr, n, target, i + 1);
}
int last_occurence(int arr[], int n, int target, int i)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = last_occurence(arr, n, target, i + 1);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == target)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[7] = {4, 2, 1, 2, 5, 2, 7};
    int target = 2;
    cout << first_occurence(arr, 7, target, 0) << endl;
    cout << last_occurence(arr, 7, target, 0) << endl;

    return 0;
}

/*
Input:


Output:


Explanation:

*/