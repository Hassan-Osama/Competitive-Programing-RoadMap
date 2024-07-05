#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long k;
    cin >> k;
    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        sum += a;
        arr[i] = a - b;
    }
    sort(arr, arr + n);
    int c = 0;
    for (int i = n - 1; i > -1; i--)
    {
        if (sum <= k)
            break;
        sum -= arr[i];
        c++;
    }
    if (sum > k)
        cout << -1 << endl;
    else
        cout << c << endl;
    return 0;
}