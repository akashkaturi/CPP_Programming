#include<iostream>
using namespace std;
int main()
{
    int n;
    int reverse = 0;
    int remainder;
    cin>>n;
    int temp=n;
    while(n>0){
        remainder = n%10;
        reverse = reverse *10 +remainder;
        n=n/10;
    }
    if(reverse==temp){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrom number"<<endl;
    }
    return 0;
}