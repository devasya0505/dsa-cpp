/*
A 
A B 
A B C 
A B C D 
A B C D E
*/

#include <iostream>
using namespace std;

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    pattern14(5);
    return 0;
}