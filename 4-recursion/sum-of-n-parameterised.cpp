#include <iostream>
using namespace std;

// Recursive function to find sum of first N natural numbers
int sumOfNaturalNumbers(int N)
{
    // Base case: if N is 1, return 1
    if (N == 1)
    {
        return 1;
    }
    // Recursive case: current number + sum of previous numbers
    return N + sumOfNaturalNumbers(N - 1);
}

int main()
{
    int N;
    cout << "enter N: ";
    cin >> N;
    cout << sumOfNaturalNumbers(N) << endl;
    return 0;
}
