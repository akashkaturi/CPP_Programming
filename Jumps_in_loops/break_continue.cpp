#include<iostream>
using namespace std;
//continue - skip to the next iteration of the loop.
// break - terminate the loop.
int main()
{   int out_counter=0,over_count=0;
    int pocket_money=3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            
            continue;
        }
        if (pocket_money<0){
            over_count+=1;
            cout<<"You cannot go out"<<endl;
            break;
        }
        cout<<"Go out today!"<<endl;
        out_counter+=1;
        pocket_money=pocket_money-350;
    }
    cout<<"Out Counter  "<<out_counter<<endl;
    cout<<"Over Counter  "<<over_count<<endl;
    return 0;
}

//https://www.youtube.com/watch?v=Stf7KBiA1vs&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=7
//https://drive.google.com/file/d/1-Qst-EVckIyACVxCq3BdLWZUm3epHQMd/view