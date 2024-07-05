#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int aa = 0;
    for (int i = 0; i < n; i += aa)
    {
        aa++;
        cout << s[i];
    }
    cout << endl;

    return 0;
}