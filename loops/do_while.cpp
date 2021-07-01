#include<iostream>
using namespace std;
int main()
{
//https://www.youtube.com/watch?v=IlIn_D1RT7M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=6
//difference between while and dowhile is in dowhile first we execute statements inside the body and then we check for the condition. it is just the reverse process of while loop
  int n;
  cin>>n;
  do{
      cout<<n<<endl;
      cin>>n;
  }  
  while(n>0);
    return 0;
}
// in dowhile loop the loop will execute for one iteration that means it'll display -2 if we enter -2 for one time. then after one iteration the condition checking takes place.