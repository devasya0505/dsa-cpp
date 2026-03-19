#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n:";
    cin >> n;

    cout << "enter array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cout << "enter number: ";
        cin >> number;

        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}