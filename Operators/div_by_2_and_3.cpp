#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if ((n%2==0) && (n%3==0)){
        cout<<"both"<<endl;
    }
    else if( n%2==0){
        cout<<"by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"by 3"<<endl;
    }
    
    
    return 0;
}