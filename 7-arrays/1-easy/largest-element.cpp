#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 2, 10, 5, 2};

    int largest = a[0];

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << "largest element is: " << largest;
    return 0;
}