#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int aa[n];
    for (int i = 0; i < n; i++)
    {
        cin >> aa[i] >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    int bb[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i] >> bb[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    sort(aa, aa + n);
    sort(bb, bb + m);
    int ans = max(b[m - 1] - a[0], aa[n - 1] - bb[0]);
    if (ans > 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
    return 0;
}