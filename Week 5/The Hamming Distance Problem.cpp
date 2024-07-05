#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

void fastInOut();

void ham(string d, int s, int o)
{
    if ((int)d.size() == s)
    {
        if (!o)
            cout << d << endl;
        return;
    }
    ham(d + '0', s, o);
    ham(d + '1', s, o - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
#endif
    fastInOut();

    int n, s, o;
    cin >> n;
    while (n--)
    {
        cin >> s >> o;
        string d = "";
        ham(d, s, o);
        if (n)
            cout << endl;
    }
}
void fastInOut()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
}