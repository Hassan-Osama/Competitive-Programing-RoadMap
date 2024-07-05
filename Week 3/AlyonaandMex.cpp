#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int ans = 1;
    for (auto i : arr)
    {
        if (ans <= i)
            ans++;
    }
    cout << ans << endl;
    return 0;
}