#include <iostream>
using namespace std;

int main()
{
    int n, m, sum = 0, ld, cube = 0;

    cout << "Enter n: ";
    cin >> n;
    m = n;

    while (m > 0)
    {
        ld = m % 10;
        cube = (ld * ld * ld);
        sum = sum + cube;
        m = m / 10;
    }

    if (sum == n)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "no armstrong";
    }
    return 0;
}