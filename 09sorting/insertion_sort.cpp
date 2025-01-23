#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, current;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++) //starts from first element not 0th element
    {
        current = arr[i];                  //first element
        int j = i - 1;                     //pointer to 0th element
        while (arr[j] > current && j >= 0) 
        // while jth element is smaller than the current element this loop happens 
        // and if j=-1 then the checking is done until the first element from the back.
        {
            /* 
            if the arr[j]th element is greater than current then we have to shift jth element to j+1th element
            giving space for the current value to be placed at the right postion.
            */
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current; // now place the current element is placed at right position.
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//https://www.youtube.com/watch?v=3GC83dh4cf0&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=22