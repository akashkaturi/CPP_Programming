#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sieve_of_eratosthenes(int n)
{
    int arr[100000] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            /*/sieve..- starts from i^2, that is from 4 
            and marking all the multiples of 2,by incrementing 2 at a time,
            then starts from 3^2, i.e 9 and marks all multiples of 3 and and by incrementing 3 at a time and so on..*/
            {
                arr[j] = 1; // EVERY jth index of MULTIPLE i IS MARKED AS 1 in arr.
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0) //it checks the values of all indexes and returns indexes with only prime numbers
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve_of_eratosthenes(n);
    return 0;
}