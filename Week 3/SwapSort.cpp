#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++)
    {
        int mn = arr[i];
        int mni = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < mn)
            {
                mn = arr[j];
                mni = j;
            }
        }
        if (i != mni)
        {
            int tmp = arr[i];
            arr[i] = arr[mni];
            arr[mni] = tmp;
            ans.push_back(make_pair(i, mni));
        }
    }
    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}