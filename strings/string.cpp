#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string str;
    // cin>>str; // used to input single word strings
    // cout<<str;
    string str2;
    getline(cin,str2); // we can input multiple word string or a sentence using getline
    cout<<str2<<endl;
    string st1="hello", st2=" world";
    cout<<st1+st2<<endl; // using this we can use the strings in same order and add them seperately
    cout<<st1.append(st2)<<endl; // using this it will update st1
    cout<<st1<<endl;
    cout<<st1[4]<<endl; // access particular char in a string
    st1.clear();
    cout<<st1<<endl;
    if(st1.empty()){
        cout<<"String is empty"<<endl;
    }
    if(!st2.empty()){
        cout<<"String is not empty"<<endl;
    }

    st2.erase(3,2); // starting from 3rd element 2 characters will be eliminated.
    cout<<st2<<endl;
    st2="Hello world";
    cout<<st2.find("wor")<<endl; // to find the starting position of the particular string.
    st2.insert(5,", akash you're my"); // insert at 5th postion, the string in quotes.
    cout<<st2<<endl;
    cout<<st2.size()<<endl; //length or size both gives the same output.
    cout<<st2.length()<<endl;
    for(int i=0;i<st2.length();i++){
        cout<<st2[i]<<endl;// to iterate through the string.
    }
    // string can be updated in c++
    string substring;
    substring= st2.substr(7,5);
    cout<<substring<<endl;
    string s_num="786";
    int x=stoi(s_num); // to convert string into integer.
    cout<<x<<endl;
    cout<<sizeof(x)<<endl;
    cout << typeid(x).name() << endl;
    cout<<to_string(x)+"25"<<endl; // convert int into string
    string new_str="kjd iuhgfj dihg njiudfhgni";
    sort(new_str.begin(),new_str.end()); // to sort a string in alphabetical-numerical-character preference order.
    cout<<new_str<<endl;
    return 0;
}