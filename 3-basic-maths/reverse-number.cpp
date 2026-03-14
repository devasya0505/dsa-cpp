#include <iostream>
using namespace std;

int main()
{
    int revNo = 0, lastDig, n = 7789, m = n;

    while (m > 0)
    {
        lastDig = m % 10;
        m = m / 10;
        revNo = (revNo * 10) + lastDig;
    }

    cout << "Original: " << n << endl;
    cout << "Reverse: " << revNo << endl;

    return 0;
}