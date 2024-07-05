#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max = -1;
    for (int i = 0; i * a <= n; i++)
        for (int j = 0; j * b + i * a <= n; j++)
        {
            int r = n - a * i - b * j;
            if (r % c == 0)
                if (max < i + j + r / c)
                    max = i + j + r / c;
        }
    cout << max << endl;
    return 0;
}