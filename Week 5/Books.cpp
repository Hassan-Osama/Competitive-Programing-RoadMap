#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n, t;
int ar[N];
int prefix_sum[N];

int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        prefix_sum[i] = prefix_sum[i - 1] + ar[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = i, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) / 2;
            if (prefix_sum[mid] - prefix_sum[i - 1] <= t)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (prefix_sum[r] - prefix_sum[i - 1] <= t)
        {
            ans = max(ans, r - i + 1);
        }
    }
    cout << ans << "\n";
}