#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int c = 0;
    for (int i = 1; i <= w; i++)
    {
        c += i * k;
    }
    if (c < n)
        cout << 0 << endl;
    else
    {
        cout << c - n << endl;
    }
    return 0;
}