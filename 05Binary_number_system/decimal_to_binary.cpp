#include<iostream>
using namespace std;
int main()
//base 10 - decimal numbers
{ // base 2 - binary numbers
    //45 = 32 + 0+ 8 + 4 + 0 + 1 ( 1 0 1 1 0 1)
//Convert Decimal to binary
    int n=45;
    int i,arr[10];
    for(i=0;n>0;i++){
        arr[i]=n%2;  //just add the remainders into single array and that will be enough
        n=n/2;
    }
    for(i=i-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//https://www.youtube.com/watch?v=QIyugGzih4k&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=12