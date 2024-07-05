#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 1e7 + 10;
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

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int r, l;
    cin >> n;
    l = (int)n / 2;
    r = n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    while (l > 0 && 2 * r > n)
    {
        if (arr[r] >= 2 * arr[l])
        {
            r--;
            ans++;
        }
        l--;
    }
    cout << n - ans << endl;
    return 0;
}
