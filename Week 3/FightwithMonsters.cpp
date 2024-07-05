#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b, k;
    cin >> n >> a >> b >> k;
    vector<long long> pq;
    while (n-- > 0)
    {
        long long x;
        cin >> x;
        x = x % (a + b);
        if (x == 0)
            x = a + b;
        long long req = x % a == 0 ? x / a : x / a + 1;
        pq.push_back(req - 1);
    }
    int ans = 0;
    sort(pq.begin(), pq.end());
    for (int i = 0; i < pq.size(); i++)
    {
        long long cur = pq[i];
        if (k - cur >= 0)
        {
            k -= cur;
            ans++;
        }
        else
            break;
    }
    cout << (ans) << endl;
}