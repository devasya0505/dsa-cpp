#include <bits/stdc++.h> // Includes almost all standard C++ libraries
using namespace std;     // Allows using standard library names without writing std::

int main()
{
    // =========================================================
    // SET DECLARATION
    // A set stores UNIQUE elements in SORTED order
    // =========================================================

    set<int> st;
    // Create a set that stores integers
    // Properties:
    // 1. Elements are unique (no duplicates allowed)
    // 2. Elements are automatically stored in sorted order

    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================

    st.insert(5);
    // Insert element 5 into the set

    st.insert(2);
    // Insert element 2

    st.insert(8);
    // Insert element 8

    st.insert(2);
    // Duplicate element
    // This will NOT be inserted because set only stores unique values

    st.insert(10);
    // Insert element 10

    // After insertion the set becomes:
    // {2, 5, 8, 10}   (automatically sorted)

    // =========================================================
    // PRINTING ELEMENTS USING ITERATOR
    // =========================================================

    cout << "Elements in set: ";

    for (auto it = st.begin(); it != st.end(); it++)
    // begin() → iterator pointing to first element
    // end()   → iterator pointing just after last element
    {
        cout << *it << " ";
        // *it dereferences the iterator to access the value
    }

    cout << endl;

    // =========================================================
    // ACCESSING SIZE
    // =========================================================

    cout << "Size of set: " << st.size() << endl;
    // size() returns number of elements present in the set

    // =========================================================
    // FINDING AN ELEMENT
    // =========================================================

    auto it = st.find(5);
    // find(value) returns iterator pointing to that element
    // If element does not exist → returns st.end()

    if (it != st.end())
    {
        cout << "Element 5 found in set" << endl;
    }

    // =========================================================
    // ERASING ELEMENT
    // =========================================================

    st.erase(8);
    // erase(value) removes that element from the set

    cout << "After deleting 8: ";

    for (auto x : st)
    // Range-based loop to print all elements
    {
        cout << x << " ";
    }

    cout << endl;

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of 2: " << st.count(2) << endl;
    // count(value) returns:
    // 1 → if element exists
    // 0 → if element does not exist
    // (since duplicates are not allowed)

    // =========================================================
    // LOWER BOUND
    // =========================================================

    auto lb = st.lower_bound(5);
    // lower_bound(x) returns iterator to first element >= x

    cout << "Lower bound of 5: " << *lb << endl;

    // =========================================================
    // UPPER BOUND
    // =========================================================

    auto ub = st.upper_bound(5);
    // upper_bound(x) returns iterator to first element > x

    cout << "Upper bound of 5: " << *ub << endl;

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    st.clear();
    // clear() removes all elements from the set

    cout << "Set empty? " << st.empty() << endl;
    // empty() returns:
    // 1 → if set is empty
    // 0 → if set has elements

    return 0;
    // Program finished successfully
}