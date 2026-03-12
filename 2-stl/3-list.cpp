#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a list
    list<int> ls;

    // Insert element at the back
    ls.push_back(2);
    // list = {2}

    ls.emplace_back(4);
    // list = {2,4}
    // emplace_back is faster than push_back

    // Insert element at the front
    ls.push_front(5);
    // list = {5,2,4}

    // Insert element at the front using emplace
    ls.emplace_front(10);
    // list = {10,5,2,4}

    // Traverse the list
    for (auto it : ls)
    {
        cout << it << " ";
    }

    cout << endl;

    // Other useful functions (same as vector)
    // begin()  -> iterator to first element
    // end()    -> iterator to last element
    // rbegin() -> reverse begin
    // rend()   -> reverse end
    // clear()  -> remove all elements
    // insert() -> insert at specific position
    // size()   -> number of elements
    // swap()   -> swap two lists

    return 0;
}