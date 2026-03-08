/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

#include <iostream>
using namespace std;

// Function to print the pattern of numbers
void pattern13(int N) {
    int num = 1;  // Starting number

    // Outer loop for the number of rows
    for (int i = 1; i <= N; i++) {

        // Inner loop to print numbers increasing by 1 in each row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  // Print the current number followed by a space
            num = num + 1;  // Increment the number for the next print
        }

        // Move to the next line after printing the current row
        cout << endl;
    }
}

int main() {
    int N = 5;  // Set the size of the pattern (5 rows)
    pattern13(N);  // Call the function to print the pattern

    return 0;
}
