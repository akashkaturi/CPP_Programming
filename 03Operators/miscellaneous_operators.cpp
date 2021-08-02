#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"Size of -> "<<sizeof(a)<<endl; // size of datatype
    
    
    //Ternary or conditional operator
    //(condtion)?X:Y -->> Returns value of X if condition is true or else value of Y
    int b=5;
    int c = (a>b)?a-b:b-a ;
    cout<<"Ternary operator -> "<<c<<endl;
    
    
    //cast operator -  used to covert from one datatype to another datatype.
    float num=3.147;
    char c_char=char(num);
    cout<<sizeof(c_char)<<endl;
    char c2_char='a';
    cout<<int(c2_char)<<endl;
    int n_int=97;
    cout<<char(n_int)<<endl;


    //Comma Operator -> causes a sequence of operations to be performed.
    int a_num=(2,3,4); // 4 is stored in a
    cout<<a_num<<endl;
    int a2_num=(a_num++, ++a_num); //second value is stored
    cout<<a2_num<<endl;

    a = 5;
    a = 2, 3, 4; // a is updated by 2
    cout << a;
    
    //Address operator -> to find the address of the variable
    int a_add=9;
    cout<<&a_add<<endl;

    //Pointer operator
    // to point a variable. 

    return 0;
}