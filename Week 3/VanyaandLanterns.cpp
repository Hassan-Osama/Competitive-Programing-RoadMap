#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    sort(arr, arr + n);
    double ans = 0;
    ans = max(l - arr[n - 1], arr[0]);
    for (int i = 1; i < n; i++)
    {
        ans = max((arr[i] - arr[i - 1]) / 2.0, ans);
    }
    cout << setprecision(10) << (ans) << endl;
    return 0;
}