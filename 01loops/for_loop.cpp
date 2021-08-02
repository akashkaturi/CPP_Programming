#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;

    for(int counter=0;counter<n;counter++) //initialization of for loop and counter
    {
        sum=sum+counter; // 1st iteration sum=0+1, 2nd sum=1+2,... until end
    }
    cout<<sum<<endl;
    return 0;
}
//https://drive.google.com/file/d/1lr0el7Thj8Y5shsDSDnSkSXkX_2AbIZC/view