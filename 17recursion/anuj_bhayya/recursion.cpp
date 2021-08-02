#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum_of_n(int n){
    if(n==1){
        return 1;
    }
    return n+sum_of_n(n-1);
}
int power_of_n(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power_of_n(n,p-1);

    /*
    3^4= 3* 3^3
    which is equal to 
    a^b=a* a^b-1
    recursively we can say
    return n*power_of_n(n,p-1)
    */ 
}

int fast_power(int a, int b){
   
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return fast_power(a*a,b/2);
    }
    return a*fast_power(a,b-1);
}

//minduu pothundhi lopala...
int path(int n, int m){
    if(n==1 || m==1){
        return 1;
    }
    return path(n,m-1)+path(m,n-1);
}
int main()
{
    int* count=new int;
    int n=10;
    int k=4;
    cout<<sum_of_n(n)<<endl;
    cout<<power_of_n(3,4)<<endl;
    cout<<fast_power(3,4)<<endl;
    cout<<path(2,2)<<endl;
    return 0;
}