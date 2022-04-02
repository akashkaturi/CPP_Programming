#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
}
void insert_at_end(int arr[], int &len, int k)
{
    arr[len] = k;
    len++;
}
void insert_at_index(int arr[], int &len, int index, int k)
{
    if (index >= 0 && index <= len)
    {
        for (int i = len; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = k;
        len++;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}
void delete_at_index(int arr[], int &len, int index)
{

    if (index >= 0 && index <= len)
    {
        for (int i = index; i < len; i++)
        {
            arr[i] = arr[i + 1];
        }
        len--;
    }
}
int find_element(int arr[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int binary_search(int arr[], int len, int key)
{
    sort(arr, arr + len);
    int start = 0, end = len;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int get(int arr[], int len, int index)
{
    if (index >= 0 && index <= len)
    {
        return arr[index];
    }
    return -1;
}
void set(int arr[], int len, int index, int key)
{
    if (index >= 0 && index <= len)
    {
        arr[index] = key;
    }
}
int max_element(int arr[], int len)
{
    int m = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        m = max(arr[i], m);
    }
    return m;
}
int min_element(int arr[], int len)
{
    int n = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        n = min(arr[i], n);
    }
    return n;
}
int sum(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    return sum;
}
int sum_recursion(int arr[], int len)
{
    if (len == 0)
    {
        return 0;
    }
    return arr[len - 1] + sum_recursion(arr, len - 1);
}
int no_of_digits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}
void reverse_array(int arr[], int len)
{
    int i = 0, j = len - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void shift_array(int arr[], int len)
{
    if (len > 0)
    {
        static int start = arr[0];
        for (int i = 1; i < len; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[len - 1] = start;
    }
}
void check_sorted(int arr[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            cout << "Not sorted" << endl;
            return;
        }
    }
    cout << "Sorted";
}
void inserting_element_in_sorted_array(int arr[], int len, int element)
{
    int i;
    for (i = len - 1; element > arr[i]; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int insert_index = 0, delete_index = 5;
    ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insert_at_index(arr, n, insert_index, 2000);
    cout << "Inserting element at " << insert_index << ": " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Deleting element at " << delete_index << ": " << endl;

    delete_at_index(arr, n, 5);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Element found at index: " << find_element(arr, n, 3) << endl;
    cout << "Element found at index: " << binary_search(arr, n, 1) << endl;
    cout << sum_recursion(arr, 5) << endl;
    reverse_array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    shift_array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Input:


Output:


Explanation:

*/
