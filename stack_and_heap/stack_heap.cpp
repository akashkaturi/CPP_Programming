//https://www.youtube.com/watch?v=bbym08gSWvQ&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=30
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10; //stored in stack.
    int *p= new int(); //stored in heap.
    // p is stored i.e address of p is stored in stack as memory address and it points to address in heap.
    *p=20; //referencing and initializing the value of p in heap
    cout<<p<<endl;
    cout<<*p<<endl; 
    delete(p); // dellocate the memory
    // dangling pointer is created when we dellocate the memory, and it points to memory allocation where there is no value. the value is not stored there.
    // we need to remove the dangling pointer.
    p=new int[4];// we don't need to initialize the pointer p again. we can point the p to a new memory block which now contains an array.
    // p now points the first block of array.
    for(int i=0;i<4;i++){
        *(p+i)=i;
    }
      for(int i=0;i<4;i++){
        cout<<*(p+i)<<endl;
    }
    //In heap dynamic memory allocation is possible.
    // that means at compile time we need not know how much size is required. 


    delete []p;
    p=NULL;
    return 0;
}