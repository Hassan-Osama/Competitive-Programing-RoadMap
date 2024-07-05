#include <iostream>
#include <set>

using namespace std;

bool check(string n)
{
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = i + 1; j < n.length(); j++)
        {
            if (n[i] == n[j])
                return false;
        }
    }
    return true;
}
int main()
{
    int l, r;
    cin >> l >> r;
    int ans = -1;
    for (int i = l; i <= r; i++)
    {
        if (check(to_string(i)))
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}