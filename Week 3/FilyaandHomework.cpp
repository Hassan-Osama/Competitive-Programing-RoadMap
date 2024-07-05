#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    set<int> ts;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (ts.find(a) == ts.end())
            v.push_back(a);
        ts.insert(a);
    }
    sort(v.begin(), v.end());
    if (ts.size() == 3)
    {
        int s = v[0];
        int b = v[2];
        int m = b - s;
        if (m % 2 == 0 && ts.find(b - (m / 2)) != ts.end())
            cout << ("YES") << endl;
        else
            cout << ("NO") << endl;
    }
    else if (ts.size() < 3)
        cout << ("YES") << endl;
    else
        cout << ("NO") << endl;
    return 0;
}