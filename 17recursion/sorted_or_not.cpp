#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sorted(arr, 10)? cout<<"Sorted" : cout<<"Not Sorted";

    return 0;
}

/*
Input:


Output:


Explanation:

*/