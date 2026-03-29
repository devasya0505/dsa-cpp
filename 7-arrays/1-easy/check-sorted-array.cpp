#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // int a[] = {2, 1, 4, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            cout << "Not sorted";
            return 0;
        }
    }

    cout << "Sorted";
    return 0;
}