/*
1 
0 1 
1 0 1 
0 1 0 1
1 0 1 0 1
*/

#include <iostream>
using namespace std;

void pattern11(int N)
{
    // First row starts by printing a single 1.
    int start = 1;

    // Outer loop for the number of rows
    for (int i = 0; i < N; i++)
    {
        // If the row index is even, print 1 first in that row
        if (i % 2 == 0)
            start = 1;

        // If the row index is odd, print 0 first in that row
        else
            start = 0;

        // Inner loop to print alternating 1's and 0's in each row
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            // Alternate between 1 and 0
            start = 1 - start;
        }

        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main()
{
    // The size of the square pattern is N
    int N = 5;
    pattern11(N); // Print the pattern
    return 0;
}