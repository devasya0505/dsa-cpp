#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 2, 3, 3, 1, 2, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int cnt;

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                cnt++;
            }
        }

        if (cnt > n / 2)
        {
            cout << a[i] << " ";
        }
    }

    cout << "\n";
    cout << cnt;
    return 0;
}