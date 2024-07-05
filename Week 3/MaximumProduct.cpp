#include "bits/stdc++.h"
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        long long ans;
        if (arr[n - 1] > 0)
        {
            ans = arr[n - 1];
            for (int i = 0, j = n - 2, c = 0; c < 2; c++)
            {
                if (arr[i] * arr[i + 1] > arr[j] * arr[j - 1])
                {
                    ans *= arr[i] * arr[i + 1] * 1l;
                    i += 2;
                }
                else
                {
                    ans *= arr[j] * arr[j - 1] * 1l;
                    j -= 2;
                }
            }
        }
        else
        {
            ans = 1l;
            for (int i = n - 1, c = 0; c < 5; i--, c++)
            {
                ans *= arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}