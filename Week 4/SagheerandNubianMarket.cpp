#include <bits/stdc++.h>

using namespace std;

long long calc(long long k, long long arr[], int n)
{
    long long sum = 0;
    long long cost[n];
    for (int i = 0; i < n; i++)
        cost[i] = arr[i] + ((i + 1) * k);
    sort(cost, cost + n);
    for (int i = 0; i < k; i++)
        sum += cost[i];
    return sum;
}

int main()
{
    int n;
    cin >> n;
    long long s;
    cin >> s;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long l = 0, r = n;
    long long ans = 0;
    long long k = -1;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        long long sum = calc(mid, arr, n);
        if (sum <= s)
        {
            ans = sum;
            k = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << k << " " << ans << endl;
}