#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        if (d == 1)
            a.push_back(i);
        else if (d == 2)
            b.push_back(i);
        else
            c.push_back(i);
    }
    int e = min(a.size(), min(b.size(), c.size()));
    cout << e << endl;
    for (int i = 0; i < e; i++)
    {
        printf("%d %d %d\n", a[i] + 1, b[i] + 1, c[i] + 1);
    }
    return 0;
}