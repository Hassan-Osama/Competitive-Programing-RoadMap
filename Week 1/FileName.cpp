#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == 'x')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}