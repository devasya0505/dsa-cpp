#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 1, 1, 1, 1, 4, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    int sum, length=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int x = i; x <= j; x++)
            {
                sum += a[k];
            }
            if (sum == k)
            {
                length = max(length, (j - i + 1));
            }
        }
    }

    cout << "length: " << length;
    return 0;
}