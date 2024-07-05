#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        long long n = a - b;
        cout << n * (k / 2) + a * (k % 2) << endl;
    }
    return 0;
}