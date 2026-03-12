#include <bits/stdc++.h> // Includes most standard C++ libraries
using namespace std;     // Allows using standard library names without std::

int main()
{
    // =========================================================
    // MAP DECLARATION
    // A map stores data in KEY → VALUE pairs
    // Keys are UNIQUE
    // Elements are stored in SORTED order based on keys
    // Implemented using Red-Black Tree
    // Time Complexity: O(log n)
    // =========================================================

    map<int, string> mp;
    // Create a map where:
    // key = int
    // value = string

    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================

    mp[1] = "Apple";
    // Insert key 1 with value "Apple"

    mp[2] = "Banana";
    // Insert key 2 with value "Banana"

    mp[3] = "Mango";
    // Insert key 3 with value "Mango"

    mp.insert({4, "Orange"});
    // Another way to insert using insert()

    mp.emplace(5, "Grapes");
    // Faster way to insert key-value pair

    // If we insert the same key again, value will be updated
    mp[2] = "Pineapple";
    // Key 2 now stores "Pineapple" instead of "Banana"

    // =========================================================
    // PRINTING MAP ELEMENTS
    // =========================================================

    cout << "Map elements (key -> value):" << endl;

    for (auto it : mp)
    // Range-based loop
    // it.first  → key
    // it.second → value
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // =========================================================
    // ACCESSING ELEMENTS
    // =========================================================

    cout << "Value of key 3: " << mp[3] << endl;
    // Access value using key

    // =========================================================
    // SIZE OF MAP
    // =========================================================

    cout << "Size of map: " << mp.size() << endl;
    // size() returns number of key-value pairs

    // =========================================================
    // FIND FUNCTION
    // =========================================================

    auto it = mp.find(4);
    // find(key) returns iterator pointing to that key

    if (it != mp.end())
    {
        cout << "Key 4 found with value: " << it->second << endl;
    }

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of key 2: " << mp.count(2) << endl;
    // Returns 1 if key exists, otherwise 0
    // Because map keys are unique

    // =========================================================
    // ERASE FUNCTION
    // =========================================================

    mp.erase(1);
    // Removes key 1 from the map

    cout << "After deleting key 1:" << endl;

    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    mp.clear();
    // Removes all elements from the map

    // =========================================================
    // EMPTY FUNCTION
    // =========================================================

    cout << "Is map empty? " << mp.empty() << endl;
    // Returns 1 if map is empty

    return 0;
}