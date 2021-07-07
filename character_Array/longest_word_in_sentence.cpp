#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//largest word in a sentence.
int main()
{
    int i=0;
    int count=0;
    int max_count=INT_MIN;
    char arr[100]="The most funniest thing you do is eat";
    int len=strlen(arr);
    int st=0, maxst=0;
    while(1){
        if(arr[i]==' ' || arr[i] == '\0')
        {
            if(count>max_count){
                max_count=count;
                maxst=st;
            }
            count=0;
            st=i+1;
        }
        else
        {
            count++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<max_count<<endl;
    for(int i=0;i<max_count;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}