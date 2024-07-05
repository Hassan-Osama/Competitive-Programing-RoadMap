#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int c = 0;
    while (n <= m)
    {
        if (m / n % 2 == 0)
        {
            n *= 2;
            c++;
        }
        else if (m / n % 3 == 0)
        {
            n *= 3;
            c++;
        }
        else
            break;
    }
    if (n == m)
        cout << c << endl;
    else
        cout << -1 << endl;

    return 0;
}