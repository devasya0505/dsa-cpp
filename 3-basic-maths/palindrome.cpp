#include <iostream>
using namespace std;

int main()
{
    int revNo = 0, lastDig, n, m;

    cout << "Enter n: ";
    cin >> n;
    m = n;

    while (m > 0)
    {
        lastDig = m % 10;
        m = m / 10;
        revNo = (revNo * 10) + lastDig;
    }

    if (revNo == n)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "no palindrome" << endl;
    }

    return 0;
}