#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<long long> list;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            list.push_back(a);
        }
        sort(list.begin(), list.end());
        vector<long long> ans;
        long long x = list[0] * list[n - 1];
        for (long long i = 2; i * i <= x; ++i)
        {
            if (x % i == 0)
            {
                ans.push_back(i);
                if (i != x / i)
                {
                    ans.push_back(x / i);
                }
            }
        }
        sort(ans.begin(), ans.end());

        if (ans == list)
            cout << (x) << endl;
        else
            cout << (-1) << endl;
    }
    return 0;
}