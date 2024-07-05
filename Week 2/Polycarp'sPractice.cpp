#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s[i] = arr[i];
    }
    sort(s, s + n);
    int ans = 0;
    for (int i = n - 1; i > n - k - 1; i--)
        ans += s[i];
    for (int i = n - 1; i > n - k - 1; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == s[i])
            {
                arr[j] = -1;
                break;
            }
        }
    }
    cout << ans << endl;
    int c = 0;
    int cnt = k - 1;
    int d = 0;
    for (int i = 0; i < n && cnt; i++)
    {
        c++;
        if (arr[i] == -1)
        {
            cnt--;
            cout << c << " ";
            d += c;
            c = 0;
        }
    }
    cout << n - d << endl;
    return 0;
}