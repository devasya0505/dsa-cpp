#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal number of divisors: " << count << endl;

    return 0;
}