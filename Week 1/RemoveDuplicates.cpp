#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v;
    for (int i = n - 1; i > -1; i--)
    {
        bool flag = 1;
        for (int j = 0; j < v.size(); j++)
        {
            if (arr[i] == v[j])
                flag = 0;
        }
        if (flag)
            v.push_back(arr[i]);
    }
    cout << v.size() << endl;
    for (int i = v.size() - 1; i > -1; i--)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}