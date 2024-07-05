#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        bool flag = true;
        for (int i = 0; i < n; i++)
            if (arr[i] > d)
                flag = false;
        if (flag)
            cout << "YES" << endl;
        else
        {
            if (arr[0] + arr[1] <= d)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}