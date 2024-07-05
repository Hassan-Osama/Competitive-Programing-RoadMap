#include <bits/stdc++.h>

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (n == 2)
        cout << 0 << endl;
    else
    {
        int a = arr[n - 2] - arr[0];
        int b = arr[n - 1] - arr[1];
        if (a > b)
            cout << b << endl;
        else
            cout << a << endl;
    }

    return 0;
}