#include<iostream>
#include<cmath>
using namespace std;
int triplet(int a, int b, int c){
    int high,med,low;
    high=max(a,max(b,c));
    if(high==a){
        med=b;
        low=c;
    }
    else if(high==b){
        med=a;
        low=c;
    }
    else{
        med=b;
        low=a;
    }
    if(pow(high,2)==pow(med,2)+pow(low,2)){
        return true;
    }
    return false;
}
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if(triplet(a,b,c)){
        cout<<"Triplet"<<endl;
    }
    else{
        cout<<"Not a triplet"<<endl;;
    }
    
    return 0;
}