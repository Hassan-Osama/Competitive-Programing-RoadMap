#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    set<int> hs;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1 && hs.find(arr[i] - 1) == hs.end())
        {
            hs.insert(arr[i] - 1);
        }
        else if (hs.find(arr[i]) == hs.end())
        {
            hs.insert(arr[i]);
        }
        else
        {
            hs.insert(arr[i] + 1);
        }
    }
    cout << hs.size() << endl;
    return 0;
}