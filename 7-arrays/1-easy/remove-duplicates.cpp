#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(a) / sizeof(a[0]);

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }

    int newSize = i + 1;

    cout << "Array after removing duplicates:\n";
    for (int k = 0; k < newSize; k++)
    {
        cout << a[k] << " ";
    }

    return 0;
}