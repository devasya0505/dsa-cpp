/*
* * * * * 
*       * 
*       * 
*       * 
* * * * *
*/

#include <iostream>
using namespace std;

// Function to print hollow square pattern
void pattern21(int n)
{
    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop for columns
        for (int j = 0; j < n; j++)
        {
            // Print star if it's a border cell
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            // Print space otherwise
            else
                cout << "  ";
        }
        // Move to next line after each row
        cout << endl;
    }
}

int main()
{
    pattern21(5);
    return 0;
}
