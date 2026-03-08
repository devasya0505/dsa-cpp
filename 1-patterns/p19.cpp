/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/


#include <iostream>
using namespace std;

void pattern19(int n)
{
    // first half
    int iniS = 0; // initial space
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        iniS += 2;
        cout << endl;
    }

    // second half
    // Initial spaces for lower half
    iniS = 2 * n - 2;

    // Loop for lower half rows
    for (int i = 1; i <= n; i++)
    {
        // Print stars on left
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Print spaces in middle
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // Print stars on right
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Decrease middle spaces by 2
        iniS -= 2;
        // Move to next row
        cout << endl;
    }
}

int main()
{
    pattern19(5);
    return 0;
}