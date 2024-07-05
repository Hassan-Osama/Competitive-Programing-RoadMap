#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = make_pair(a[i] - b[i], i);
    sort(arr, arr + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (k > 0 || arr[i].first < 0)
        {
            ans += a[arr[i].second];
            k--;
        }

        else
            ans += b[arr[i].second];
    }
    cout << ans << endl;
    return 0;
}