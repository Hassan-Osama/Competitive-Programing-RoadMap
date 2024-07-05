#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 105 + 5;
ll t[N], l[N], r[N];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> t[i] >> l[i] >> r[i];
        }
        l[0] = r[0] = m;
        bool no = 0;
        ll mn = l[n], mx = r[n];
        for (int i = n - 1; i >= 0; i--)
        {
            ll dist = t[i + 1] - t[i];
            if (mn - dist > r[i] || mx + dist < l[i])
                no = 1;
            mn = max(mn - dist, l[i]);
            mx = min(mx + dist, r[i]);
        }
        cout << (no ? "NO\n" : "YES\n");
    }
    return 0;
}