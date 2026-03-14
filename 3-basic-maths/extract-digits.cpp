#include <iostream>
using namespace std;

int main()
{
    int n = 7789, lastDigit;

    while (n > 0)
    {
        lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n / 10;
    }
    return 0;
}