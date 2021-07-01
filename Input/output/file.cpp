#include<iostream>
//#include- preprocessor directive, used to include files.
//iostream file is included, used to take input and display ouput.
//main() the execution of code begines from the main function and is mandatory for any program.
//std::cout<<"hello world"; cout and the (<<) extraction operator used to print, \n - line break, ; marks the end of a statement
// return 0; exit status of a function. 
// {} - indidcate the start and end of the function.
using namespace std; // std::cout, this belongs to namespace std, we can write using namespace std; to 
//https://drive.google.com/file/d/1k3FheMJLvVu2YBkySBU9DKXFWGne24ee/view - apni kaksha

int main(){
    int amount1;
    int amount2;
    int sum;
    cin>>amount1>>amount2;//>>insertion opertator ;
    sum=amount2+amount1;
    cout<<sum<<endl; //endl - endline
return 0;
}