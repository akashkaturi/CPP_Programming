#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pointers are variables that store address of the other variables.
    int a=10;
    int* ptr=&a; // int is used to indicate that the *ptr created is used to point int datatype
    // this stores the address inside the ptr.
 
    cout<<ptr<<endl; 
    cout<<*ptr<<endl; //dereferencing pointer.
    *ptr=30;
    cout<<a<<endl; //modifying a using pointer
    ptr++; //increasing the address which in this case will be increased by 4 bytes.
    cout<<ptr<<endl;
    return 0;
}
//https://www.youtube.com/watch?v=gHxmAgedyDk&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=30