#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, bool> hash;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash[a[i]] = true;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (hash.count(a[i] + a[j]))
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
