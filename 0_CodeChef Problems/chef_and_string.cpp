#include <iostream>
using namespace std;
typedef long long ll;
ll T, N;
string S;
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> S;
        N = S.length();
        cout << ((S.substr(1) + S[0]) == (S[N - 1] + S.substr(0, N - 1)) ? "YES\n" : "NO\n");
    }
    return 0;
}