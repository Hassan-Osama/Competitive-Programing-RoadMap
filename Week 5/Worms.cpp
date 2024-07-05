#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];
    int m, x;
    cin >> m;
    while (m--)
    {
        cin >> x;
        int l = 0, r = n - 1, mid, ans = 100000000;
        bool flag = 0;
        while (l <= r)
        {
            mid = l + ((r - l + 1) >> 1);
            if (arr[mid] >= x)
            {
                r = mid - 1;
                ans = min(ans, mid);
            }
            else
                l = mid + 1;
        }
        cout << ans + 1 << "\n";
    }
}
