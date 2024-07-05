#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    pair<long long, long long> arr[n];
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        arr[i] = make_pair(a, b);
    }
    sort(arr, arr + n);
    int i = 0;
    int j = i;
    long long m = arr[0].second;
    long long sum = arr[0].second;
    while (i <= j && j < n && i < n)
    {
        if (arr[j].first - arr[i].first >= d)
        {
            while (arr[j].first - arr[i].first >= d && i <= j)
            {
                sum -= arr[i].second;
                i++;
            }
            m = max(m, sum);
        }
        else
        {
            j++;
            sum += arr[j].second;
            if (arr[j].first - arr[i].first < d)
            {
                m = max(m, sum);
            }
        }
    }
    cout << m << endl;
    return 0;
}