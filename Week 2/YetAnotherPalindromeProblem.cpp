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
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                if (arr[i] == arr[j])
                    ans = "YES";
            }
        }
        cout << ans << endl;
    }
}