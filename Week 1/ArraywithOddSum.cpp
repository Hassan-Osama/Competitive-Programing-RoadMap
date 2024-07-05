#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int e = 0;
        int o = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                e++;
            else
                o++;
            sum += a;
        }
        if (sum % 2 == 1)
            cout << "YES" << endl;
        else
        {
            if (o > 0 && e > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}