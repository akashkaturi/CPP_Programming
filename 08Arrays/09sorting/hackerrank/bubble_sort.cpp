#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int> v, int n)
{
    int counter = 0;
    int swap = 0;
    while (counter < n)
    {
        for (auto i = v.begin(); i!= v.end()
        ; i++)
        {
            if (v[*i] > v[*i + 1])
            {
                int temp = v[*i];
                v[*i] = v[*i + 1];
                v[*i + 1] = temp;
                swap += 1;
            }
        }
        counter++;
    }
    cout << "Array is sorted in " << swap << " swaps" << endl;
    cout << "First Element: " << v.front() << endl;
    cout << "Last Element: " << v.back() << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    for (auto element : v)
    {
        cout << element << endl;
    }
    bubble(v, n);


    return 0;
}