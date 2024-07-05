#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    bool vis[105];
    fill(vis, vis + 105, 0);
    int ans[k];
    int j = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (j == k)
            break;
        int a;
        cin >> a;
        if (!vis[a])
        {
            vis[a] = true;
            ans[j++] = i;
        }
    }
    if (j == k)
    {

        cout << "YES" << endl;
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}