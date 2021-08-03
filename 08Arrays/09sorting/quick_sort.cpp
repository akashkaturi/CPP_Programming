#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[], int l, int r)  //integer function because it returns the pivot element.
{
    int pivot=arr[r];
    int i=l-1;  //it starts from -1th position
 
    for(int j=l;j<r;j++){  // it starts from 0th position.
        if(arr[j]<pivot)   // all elements less than pivot will remain as it is
        {
            i++;
            swap(arr,i,j); // so if (if) condition fails, i doesnot iterate until if find a element that is less than pivot
                            // whenever the jth element is less than pivot then the ith element(which stopped before 1 or few iterations back)
                            // will be swapped with jth element.
                            // THE swapping takes place until the ith element is the last element that is less than pivot.
        }
        
    }
    swap(arr,i+1,r); // now we have to swap the pivot into the right position, i.e i+1th position will be swapped with pivot, and all the elements on the right side of the pivot will be greater than pivot.
    return i+1; // this returns the pivot element to the quicksort algo.

}
void quicksort(int arr[], int l, int r){
    if(l<r) //otherwise it means that the array contains only one element.
    {
        int pi=partition(arr, l, r);
        quicksort(arr,l,pi-1);// recurseive algo for elements less than pivot
        quicksort(arr,pi+1,r);// recursive algo for elements greater than pivot.
    }
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}