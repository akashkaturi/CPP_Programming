#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> next_number(vector<int> arr){
    int n = arr.size();
    vector<int> *new_arr=new vector<int>;
    int sum = 0;
    for (int i = n - 1; i >= 0; --i)
    {
       if(arr[i]==9){
           arr[i] = 0;
       }
       else{
           arr[i] += 1;
           return arr;
       }
    }
    arr.push_back(0);
    arr[0] = 1;
    return arr;
    // reverse(new_arr->begin(), new_arr->end());
    // return *new_arr;
    // for (int i = 0; i < n;i++){
    //     cout << new_arr[i] << endl;
    // }
}
int main()
{
    vector<int> arr = {9,9,9,9};
    int n = 5;
   vector<int> k=next_number(arr);
   for (auto x:k){
       cout << x<<" ";
   }

       return 0;
}

/*
Input:


Output:


Explanation:

*/