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
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1)
        {
            cnt++;
            arr[i + 2] = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}