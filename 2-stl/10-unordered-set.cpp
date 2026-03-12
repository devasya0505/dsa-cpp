#include <bits/stdc++.h> // Includes most of the C++ standard libraries
using namespace std;     // Allows us to use library names without writing std::

int main()
{
    // =========================================================
    // UNORDERED_SET DECLARATION
    // Stores UNIQUE elements like set
    // BUT elements are NOT stored in sorted order
    // Implemented using HASH TABLE
    // Average time complexity for insert/find/erase = O(1)
    // =========================================================

    unordered_set<int> us;
    // Create an unordered_set that stores integers

    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================

    us.insert(10);
    // Insert element 10

    us.insert(5);
    // Insert element 5

    us.insert(20);
    // Insert element 20

    us.insert(10);
    // Duplicate value
    // This will NOT be inserted because unordered_set stores only unique elements

    us.insert(15);
    // Insert element 15

    // Elements are NOT stored in sorted order
    // Example order: 20 10 5 15 (order can vary)

    // =========================================================
    // PRINTING ELEMENTS
    // =========================================================

    cout << "Elements in unordered_set: ";

    for (auto x : us)
    // Range-based loop to traverse unordered_set
    {
        cout << x << " ";
        // Prints each element
    }

    cout << endl;

    // =========================================================
    // SIZE FUNCTION
    // =========================================================

    cout << "Size of unordered_set: " << us.size() << endl;
    // size() returns total number of elements

    // =========================================================
    // FIND FUNCTION
    // =========================================================

    auto it = us.find(10);
    // find(value) returns iterator to that element if it exists
    // otherwise returns us.end()

    if (it != us.end())
    {
        cout << "Element 10 found in unordered_set" << endl;
    }

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of 5: " << us.count(5) << endl;
    // count(value) returns:
    // 1 → if element exists
    // 0 → if element does not exist

    // =========================================================
    // ERASE FUNCTION
    // =========================================================

    us.erase(20);
    // Removes element 20 from the unordered_set

    cout << "After deleting 20: ";

    for (auto x : us)
    {
        cout << x << " ";
    }

    cout << endl;

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    us.clear();
    // Removes all elements from unordered_set

    // =========================================================
    // EMPTY FUNCTION
    // =========================================================

    cout << "Is unordered_set empty? " << us.empty() << endl;
    // empty() returns:
    // 1 → if container is empty
    // 0 → if it has elements

    return 0;
    // Program ends successfully
}