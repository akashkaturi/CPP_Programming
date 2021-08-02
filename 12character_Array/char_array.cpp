//insert Null character '/0' at the end to tell the compiler that sentence is ended.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100] {"apple"};
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];
        i++;
    }
    cout<<endl;
    char ar1[100];
    cin>>ar1;
    cout<<ar1;
    return 0;
}
//https://youtu.be/TkTgo_7ab0M?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ