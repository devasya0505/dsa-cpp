#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int flag;

    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i;
        }
    }
    return 0;
}