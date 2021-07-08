#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void convert_to_lowercase(string s, int n){
  for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    cout<<s<<endl;
}

void convert_to_uppercase(string s, int n){
  for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<s<<endl;
}
int main()
{

    string s;
    cin>>s;
   
    int n=s.length();
    convert_to_lowercase(s,n);
    convert_to_uppercase(s,n);


    // Using in built function
    transform(s.begin(),s.end(),s.begin(),::tolower); // from begin to end we need to access the string and then from begin we want to start the conversion and ::toupper or ::tolower is used to update the string.
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    return 0;
}