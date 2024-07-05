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
        pair<int, int> arr[n];
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            arr[i] = make_pair(a, b);
        }
        sort(arr, arr + n);
        bool flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i].first < arr[i + 1].first && arr[i].second > arr[i + 1].second)
                flag = 0;
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            string ans = "";
            int curi = 0, curj = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < arr[i].first - curi; j++)
                    ans += "R";
                for (int j = 0; j < arr[i].second - curj; j++)
                    ans += "U";
                curi = arr[i].first;
                curj = arr[i].second;
            }
            cout << "YES" << endl;
            cout << ans << endl;
        }
    }
    return 0;
}