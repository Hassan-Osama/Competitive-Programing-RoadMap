#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        long long a = arr[0], b = arr[1], c = arr[2];
        long long d = b - a;
        c -= d;
        cout << b + c / 2 << endl;
    }
}