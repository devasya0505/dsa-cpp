#include <iostream>
using namespace std;

// Function to search for a number in the array
int search(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int num = 1;

    int n = sizeof(arr) / sizeof(arr[0]);

    int val = search(arr, n, num);

    cout << "found at index: " << val;

    return 0;
}