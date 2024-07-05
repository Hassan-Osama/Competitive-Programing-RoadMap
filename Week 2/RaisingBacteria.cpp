#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int msk = 1;
    int c = 0;
    while (n > 0)
    {
        if (n & msk == 1)
            c++;
        n = n >> 1;
    }
    cout << c << endl;
}