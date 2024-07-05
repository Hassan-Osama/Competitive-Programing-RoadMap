#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans = "YES";
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int l = (int)2e9;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= l && b[i] <= l)
            l = max(a[i], b[i]);
        else if (a[i] <= l)
            l = a[i];
        else if (b[i] <= l)
            l = b[i];
        else
            ans = "NO";
    }
    cout << ans << "\n";
    return 0;
}