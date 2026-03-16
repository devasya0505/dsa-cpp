#include <iostream>
using namespace std;

// Recursive function to compute the Nth Fibonacci number
int fibonacci(int N) {
    // Base case: if N is 0 or 1, return N itself
    if (N <= 1) {
        return N;
    }

    // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
    int last = fibonacci(N - 1);   // (N-1)th Fibonacci
    int slast = fibonacci(N - 2);  // (N-2)th Fibonacci

    return last + slast;
}

int main() {
    int N = 5;
    cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
    return 0;
}
