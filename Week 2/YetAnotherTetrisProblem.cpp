#include <bits/stdc++.h>
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
        string ans = "YES";
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 != arr[i + 1] % 2)
                ans = "NO";
        }
        cout << ans << endl;
    }
}