#include "bits/stdc++.h"
using namespace std;

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

bool check(string s1, string s2)
{
    bool flag = true;
    for (int i = 0; i < s1.length() - s2.length() + 1; i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s2[j] != s1[i + j])
                flag = false;
        }
        if (flag)
            return true;
        else
            flag = true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, compare);
    bool flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (check(arr[i + 1], arr[i]))
        {
            continue;
        }
        flag = 0;
    }
    if (flag)
    {
        cout << "YES" << endl;
        for (auto s : arr)
            cout << s << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}