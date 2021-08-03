#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

void reverseSentence(string s)
{  
    stack<string> st;  //declaration of stack by including stack library, which comes with all stack functionality.
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){ //take the characters until space is occured. store all the characters in the string word until space occurs.
            word+=s[i];
            i++; //increment i to iterate through the string
        }
        st.push(word); //push every word into the stack after creating it through while loop
    }

    while(!st.empty()) //as long as the stack is not empty pop the words out and print them in the form of sentence.
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main()
{
    string s="Hello, People. Welcome to my world.";
    reverseSentence(s);
    return 0;
}