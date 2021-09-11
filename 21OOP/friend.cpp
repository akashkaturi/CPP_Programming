#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int a = 10;
    void show()
    {
        cout << "show of A"<<endl;
    }
    friend void mul(A k){
        cout << k.a * 10 << endl;
    }
};
int main()
{
    A obj;
    obj.show();
    mul(obj);

    return 0;
}

/*
Input:


Output:


Explanation:

*/