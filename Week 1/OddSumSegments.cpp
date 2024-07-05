#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 1)
                c++;
        }
        if (c < k)
            cout << "NO" << endl;
        else if (c % 2 == k % 2)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (k != 1 && arr[i] % 2 == 1)
                {
                    cout << i + 1 << " ";
                    k--;
                }
            }
            cout << n << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}