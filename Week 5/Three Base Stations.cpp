#include <bits/stdc++.h>
using namespace std;

const int N = 5e5 + 5;

int n;
int ar[N];

bool valid(double D)
{
    double last = -2e9, stations = 0;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] > last + 2 * D)
        {
            last = ar[i];
            stations++;
        }
    }
    return stations <= 3;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar + 1, ar + n + 1);
    double L = 0, R = 2e9;
    int cnt = 400;
    while (cnt--)
    {
        double mid = L + (R - L) / 2;
        if (valid(mid))
        {
            R = mid;
        }
        else
        {
            L = mid;
        }
    }
    cout << fixed << setprecision(6) << R << '\n';
    vector<double> points;
    double last = -1e9;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] > last + 2 * R)
        {
            last = ar[i];
            points.push_back(ar[i] + R);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (i + 1 <= points.size())
        {
            cout << points[i] << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    return 0;
}
