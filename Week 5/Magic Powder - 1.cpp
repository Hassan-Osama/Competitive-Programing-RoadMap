#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    long long l = 0, r = 1000000000000000001, mid, tmp = k;
    bool flag = 0;
    while (l <= r)
    {
        mid = l + ((r - l + 1) >> 1);
        for (int i = 0; i < n; i++)
        {
            if (b[i] / a[i] < mid)
            {
                if ((b[i] + k) / a[i] >= mid)
                {
                    k += b[i];
                    k -= mid * a[i];
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
        k = tmp;
        flag = 0;
    }
    cout << l - 1;
}
