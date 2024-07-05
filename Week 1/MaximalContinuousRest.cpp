#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int c = 0;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c++;
        else
        {
            if (c > max)
                max = c;
            c = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c++;
        else
        {
            if (c > max)
                max = c;
            c = 0;
        }
    }
    cout << max << endl;

    return 0;
}