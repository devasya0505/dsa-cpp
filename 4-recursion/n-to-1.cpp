#include <iostream>
using namespace std;

void f(int n, int i)
{
    if (n < i)
        return;
    cout << n << "\n";
    f(n - 1, i);
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    f(n, 1);

    return 0;
}