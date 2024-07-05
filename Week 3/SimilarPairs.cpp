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
        int e = 0, o = 0, one = 0;
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] % 2 == 0)
                e++;
            else
                o++;
            if (arr[i] - arr[i + 1] == -1)
                one++;
        }
        if (arr[n - 1] % 2 == 1)
            o++;
        else
            e++;
        if (e % 2 == 1 && o % 2 == 1 && one > 0)
            cout << "YES" << endl;
        else if (e % 2 == 0 && o % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}