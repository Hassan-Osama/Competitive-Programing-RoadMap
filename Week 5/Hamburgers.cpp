#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 7;
const int M = 1e3 + 5;
int siz = 0;
ll n;
ll arr[N];
int sol[M];
bool res[N];
int freq[10];
int cnt[N];
int vis[N];
ll presum[N];
ll B = 0, S = 0, C = 0, Bn, Sn, Cn, Bp, Sp, Cp;
ll m;
bool isVilad(ll mid)
{
    ll a, b, c;
    a = max(0LL, (mid * B - Bn) * Bp);
    b = max(0LL, (mid * S - Sn) * Sp);
    c = max(0LL, (mid * C - Cn) * Cp);
    return a + b + c <= m;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    cin >> Bn >> Sn >> Cn;
    cin >> Bp >> Sp >> Cp;
    cin >> m;
    for (int i = 0; i < (int)s.size(); i++)
    {
        B += s[i] == 'B';
        S += s[i] == 'S';
        C += s[i] == 'C';
    }
    ll lo = 0, hi = 2e12;
    while (lo < hi)
    {
        ll mid = lo + (hi - lo + 1) / 2;
        if (isVilad(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
    return 0;
}
