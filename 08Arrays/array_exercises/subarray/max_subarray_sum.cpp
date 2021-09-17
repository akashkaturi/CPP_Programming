#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// kadane algo to find the max continuous sum
int kadane(int arr[],int n){
    int curr_sum = 0;
    int curr_max = INT_MIN;
    for (int i = 0; i < n;i++){
        curr_sum += arr[i];
        if(curr_sum<0){
            curr_sum = 0;
        }
        curr_max = max(curr_max, curr_sum);
    }
    return curr_max;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // here we find the sum of continuous elements sum 
    int nonwrapsum = kadane(arr, n);
    // we are going to add sum of all elements to total sum and then 
    // change the +sign of each element to -sign.
    int total_sum = 0;
    for (int i = 0; i < n;i++){
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    // finally we are going to find the wrap sum which means all the elements sum
    // that is circular sum of the elements.
    int wrapsum = total_sum + kadane(arr, n);// here we should do -(-kadane(arr,n)) because total_sum-max sum of array whose signs are reversed will give us the circular sum.   
    cout << wrapsum << endl;
    cout << nonwrapsum << endl;
    cout << max(wrapsum, nonwrapsum) << endl;// the max of both wrapsum and nonwrapsum will give us the answer,
    //we use both wrapsum and nonwrapsum because if there are any negative numbers in between, we need to remove them from the total sum
    //otherwise if all are positive numbers then we get both wrapsum and nonwrapsum as equal values.
    return 0;
}