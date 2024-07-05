#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int n = 7 - max(a, b);
    string ans = "";
    if (n == 1)
        ans = "1/6";
    else if (n == 2)
        ans = "1/3";
    else if (n == 3)
        ans = "1/2";
    else if (n == 4)
        ans = "2/3";
    else if (n == 5)
        ans = "5/6";
    else
        ans = "1/1";
    cout << ans << endl;
    return 0;
}