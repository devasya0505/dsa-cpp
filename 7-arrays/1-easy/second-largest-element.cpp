#include <iostream>
using namespace std;

int main()
{
    int a[] = {2, 3, 20, 70, 2};

    int largest1 = a[0];
    int largest2 = a[0];

    for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] > largest1)
        {
            largest2 = largest1;  // store previous largest
            largest1 = a[i];
        }
        else if (a[i] > largest2 && a[i] != largest1)
        {
            largest2 = a[i];
        }
    }

    cout << "2nd largest element is: " << largest2;

    return 0;
}