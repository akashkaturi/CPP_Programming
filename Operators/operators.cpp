#include<iostream>
using namespace std;
int main()
{
    //ARithmetic operators +,-,/,*,%
    //Unary operators by example a++,++a,a--,--a
      //b=++a pre
    //=> a = a+1 
    //=> b = a
    //b=a++ post
    //=> b=a
    //=> a=a+1
    int a=1,b=1;
    int i=1;
    //1    //3
    i=i++ + ++i;
    cout<<i<<endl;
    int sum=a++ + ++b;
    cout<<sum<<endl;
    cout<<a<<endl;
    int j=1,k=2;
    //  1 2 1,[2] 2,[3]  3    4
    sum=j+k+j++ + k++ + ++j + ++k;
    int h=0;
    cout<<sum<<endl;
    // 0,[1]  0      1     1,[0]
    h= h++ - --h + ++h - h--;
    cout<<h<<endl;

    return 0;
}
//https://www.youtube.com/watch?v=JBgZxnAj4hg&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=9
//https://drive.google.com/file/d/1QtBvLHK-8d-zPlKQp2pa3m_lgVnG1ecl/view