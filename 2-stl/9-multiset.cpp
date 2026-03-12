#include <bits/stdc++.h> // Includes almost all standard C++ libraries
using namespace std;     // Allows using standard library names without writing std::

int main()
{
    // =========================================================
    // MULTISET DECLARATION
    // A multiset stores elements in SORTED order
    // Unlike set, it allows DUPLICATE elements
    // =========================================================

    multiset<int> ms;
    // Create a multiset that stores integers

    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================

    ms.insert(5);
    // Insert element 5

    ms.insert(2);
    // Insert element 2

    ms.insert(8);
    // Insert element 8

    ms.insert(5);
    // Duplicate element
    // Unlike set, multiset allows duplicates

    ms.insert(2);
    // Another duplicate

    // Multiset automatically sorts elements
    // Current multiset: {2,2,5,5,8}

    // =========================================================
    // PRINTING ELEMENTS
    // =========================================================

    cout << "Elements in multiset: ";

    for (auto it = ms.begin(); it != ms.end(); it++)
    // begin() → iterator to first element
    // end()   → iterator to element after last
    {
        cout << *it << " ";
        // Dereference iterator to print value
    }

    cout << endl;

    // =========================================================
    // SIZE OF MULTISET
    // =========================================================

    cout << "Size of multiset: " << ms.size() << endl;
    // size() returns total number of elements including duplicates

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of 5: " << ms.count(5) << endl;
    // count(value) returns how many times the value appears

    // =========================================================
    // FIND FUNCTION
    // =========================================================

    auto it = ms.find(5);
    // find(value) returns iterator to FIRST occurrence

    if (it != ms.end())
    {
        cout << "Element 5 found in multiset" << endl;
    }

    // =========================================================
    // ERASE ELEMENT
    // =========================================================

    ms.erase(5);
    // erase(value) removes ALL occurrences of that value

    cout << "After erasing all 5s: ";

    for (auto x : ms)
    {
        cout << x << " ";
    }

    cout << endl;

    // =========================================================
    // ERASE ONLY ONE OCCURRENCE
    // =========================================================

    ms.insert(2);
    ms.insert(2);
    // Now multiset may look like: {2,2,2,2,8}

    auto it2 = ms.find(2);
    // Find first occurrence of 2

    ms.erase(it2);
    // Erase only that one element

    cout << "After removing one 2: ";

    for (auto x : ms)
    {
        cout << x << " ";
    }

    cout << endl;

    // =========================================================
    // LOWER BOUND
    // =========================================================

    auto lb = ms.lower_bound(2);
    // Returns iterator to first element >= 2

    cout << "Lower bound of 2: " << *lb << endl;

    // =========================================================
    // UPPER BOUND
    // =========================================================

    auto ub = ms.upper_bound(2);
    // Returns iterator to first element > 2

    cout << "Upper bound of 2: " << *ub << endl;

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    ms.clear();
    // Removes all elements from multiset

    cout << "Multiset empty? " << ms.empty() << endl;
    // empty() returns 1 if multiset is empty

    return 0;
}