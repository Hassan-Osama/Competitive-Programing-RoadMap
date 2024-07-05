#include <bits/stdc++.h>

using namespace std;
int arr[200002];
int main()
{
    int n, k, q, x, y;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[x]++, arr[y + 1]--;
    }
    for (int i = 1; i < 200001; i++)
        arr[i] += arr[i - 1];
    for (int i = 1; i < 200001; i++)
        arr[i] = (arr[i] >= k) + arr[i - 1];
    while (q--)
    {
        cin >> x >> y;
        cout << arr[y] - arr[x - 1] << "\n";
    }
}
