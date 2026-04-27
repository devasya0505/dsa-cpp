#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, -4, -5, 4, 6, -3, 4, -2, -7};
    int n = sizeof(a) / sizeof(a[0]);

    int pos[n], neg[n];
    int p = 0, q = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            pos[p++] = a[i];
        else
            neg[q++] = a[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        a[2 * i] = pos[i];
        a[2 * i + 1] = neg[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}