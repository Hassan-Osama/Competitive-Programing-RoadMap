#include "bits/stdc++.h"
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int i, j;
    for (i = a.length(), j = b.length(); i > -1 && j > -1; i--, j--)
    {
        if (a[i] != b[j])
            break;
    }
    int ans = 0;
    ans += i + 1;
    ans += j + 1;
    cout << ans << endl;
    return 0;
}