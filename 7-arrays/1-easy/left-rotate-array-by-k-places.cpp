#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int k;
    cout << "enter k-place: ";
    cin >> k;

    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[i];
    }

    for (int i = k; i < n; i++)
    {
        a[i - k] = a[i];
    }

    for (int i = 0; i < k; i++)
    {
        a[n - k + i] = temp[i];
    }

    // for (int i = n - k; i < n; i++)
    // {
    //     a[i] = temp[i - (n - k)];
    // }

    cout << "printing after left rotate: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}