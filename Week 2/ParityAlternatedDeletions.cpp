#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> e;
    vector<int> o;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        if (a % 2)
            o.push_back(a);
        else
            e.push_back(a);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    reverse(e.begin(), e.end());
    reverse(o.begin(), o.end());
    if (e.size() >= o.size())
    {
        for (int i = 0; i < o.size(); i++)
        {
            sum -= e[i];
            sum -= o[i];
        }
        if (e.size() != o.size())
            sum -= e[o.size()];
    }
    else
    {
        for (int i = 0; i < e.size(); i++)
        {
            sum -= o[i];
            sum -= e[i];
        }
        sum -= o[e.size()];
    }
    cout << sum << endl;
    return 0;
}