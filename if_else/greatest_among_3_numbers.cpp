#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is larger\n"
                 << a;
        }
        else
        {
            cout << "C is larger " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is larger " << b;
        }
        else
        {
            cout << "C is larger " << c;
        }
    }

    return 0;
}