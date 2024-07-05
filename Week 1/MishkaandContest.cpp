#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > k)
            break;
        cnt++;
    }
    for (int i = n - 1; i > -1; i--)
    {
        if (arr[i] > k)
            break;
        cnt++;
    }
    cout << min(cnt, n) << endl;
    return 0;
}