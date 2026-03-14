#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;

    cout << "enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }

    if (cnt == 2)
    {
        cout << "prime number" << endl;
    }
    else
    {
        cout << "no prime number" << endl;
    }

    return 0;
}