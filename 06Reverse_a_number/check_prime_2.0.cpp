#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    bool flag = 0;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << "Not Prime" << endl;
        }
    }
    if (flag == 0)
    {
        cout << "Prime" << endl;
    }

    return 0;
}