#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;
    switch(button) // mention the variable inside the switch condition which has to be checked
    {
        case 'a': //expression
            cout<<"hello"<<endl;
            break;
        case 'b':
            cout<<"Bonjour"<<endl;
            break;
        case 'c':
        cout<<"Salut";
        break;
        default:
        cout<<"I am still learning that."<<endl;

        break;
    }   
    
    return 0;
}
//https://www.youtube.com/watch?v=G80-j_xnE_8&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=8
//https://drive.google.com/file/d/15IgF0aMYfcvZV_UFipWBh7OTFnFs7NuE/view