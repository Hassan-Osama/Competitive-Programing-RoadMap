#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char number[n];
    scanf("%s", number);
    int arr[10];
    for (int i = 1; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int a = number[i] - '0';
        if (arr[a] > a)
        {
            for (int j = i; j < n; j++)
            {
                char c = arr[number[j] - '0'] + '0';
                if (number[j] <= c)
                    number[j] = c;
                else
                    break;
            }
            break;
        }
    }
    cout << number << endl;
    return 0;
}