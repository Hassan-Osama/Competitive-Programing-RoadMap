#include <bits/stdc++.h>

#define MX 14
typedef long long ll;

ll dp[MX][MX];
ll fact[MX] = {1, 1};
ll choose(int n, int k)
{
    return fact[n] / (fact[k] * fact[n - k]);
}
ll stirling(int n, int k)
{
    if (n == 0 && k == 0)
        return 1;
    if (n == 0 || k == 0)
        return 0;
    if (dp[n][k] != 0)
        return dp[n][k];
    dp[n][k] = stirling(n - 1, k - 1) - (n - 1) * stirling(n - 1, k);
    return dp[n][k];
}
ll a_stirling(int n, int k)
{
    ll ans = stirling(n, k);
    return ans >= 0 ? ans : -ans;
}

ll calc(int n, int p, int q)
{
    if (p < 1 || q < 1 || p + q > n + 1 || p + q <= 2)
    {
        return 0;
    }
    int N = p + q - 2;
    int K = q - 1;
    return a_stirling(n - 1, N) * choose(N, K);
}

int t, n, p, q, i;
int main()
{
    for (i = 2; i < MX; ++i)
        fact[i] = fact[i - 1] * i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &n, &p, &q);
        printf("%lld\n", calc(n, p, q));
    }
}