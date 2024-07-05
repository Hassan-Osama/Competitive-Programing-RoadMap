#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 5;

int main()
{
    int n;
    cin >> n;
    int mn = -2e9, mx = 2e9;
    bool bad = false;
    while (n--)
    {
        string con;
        int x;
        string valid;
        cin >> con >> x >> valid;
        if ((valid == "Y" && con == ">") || (valid == "N" && con == "<="))
        {

            mn = max(mn, x + 1);
        }
        else if ((con == "<" && valid == "Y") || (valid == "N" && con == ">="))
        {
            mx = min(mx, x - 1);
        }
        else if ((con == "<=" && valid == "Y") || (valid == "N" && con == ">"))
        {

            mx = min(mx, x);
        }
        else if ((con == ">=" && valid == "Y") || (valid == "N" && con == "<"))
        {

            mn = max(mn, x);
        }
        if (mx < mn)
            bad = true;

        if (bad)
        {
            cout << "Impossible";
            return 0;
        }
    }
    cout << mn << endl;
    return 0;
}
