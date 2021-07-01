#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with sahika\n";
        }
        else{
            cout<<"Shopping with sahika";
        }
     
    }
    else if(savings>2000){
        cout<<"Date with Simran";
    }
    else{
        cout<<"Friends\n";
    }

    
    return 0;
}