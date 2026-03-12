#include <bits/stdc++.h> // Includes most of the standard C++ libraries
using namespace std;

int main()
{
    // =========================================================
    // MULTIMAP DECLARATION
    // A multimap stores data in KEY -> VALUE pairs
    // Unlike map, it allows DUPLICATE keys
    // Elements are stored in SORTED order based on keys
    // Implemented using Red-Black Tree
    // Time Complexity for insert/find/erase = O(log n)
    // =========================================================

    multimap<int, string> mp;
    // Create a multimap where:
    // key = int
    // value = string

    // =========================================================
    // INSERTING ELEMENTS
    // =========================================================

    mp.insert({1, "Apple"});
    // Insert key 1 with value "Apple"

    mp.insert({2, "Banana"});
    // Insert key 2 with value "Banana"

    mp.insert({1, "Mango"});
    // Duplicate key allowed
    // Key 1 now has two values → Apple and Mango

    mp.insert({3, "Orange"});
    // Insert another key-value pair

    mp.insert({2, "Grapes"});
    // Another duplicate key

    // Current multimap (sorted by key):
    // 1 -> Apple
    // 1 -> Mango
    // 2 -> Banana
    // 2 -> Grapes
    // 3 -> Orange

    // =========================================================
    // PRINTING ELEMENTS
    // =========================================================

    cout << "Multimap elements (key -> value):" << endl;

    for (auto it : mp)
    // Range-based loop to traverse multimap
    {
        cout << it.first << " -> " << it.second << endl;
        // it.first  = key
        // it.second = value
    }

    // =========================================================
    // SIZE FUNCTION
    // =========================================================

    cout << "Size of multimap: " << mp.size() << endl;
    // Returns total number of key-value pairs

    // =========================================================
    // FIND FUNCTION
    // =========================================================

    auto it = mp.find(2);
    // find(key) returns iterator to FIRST occurrence of that key

    if (it != mp.end())
    {
        cout << "First value with key 2: " << it->second << endl;
    }

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of key 1: " << mp.count(1) << endl;
    // Returns how many elements have key = 1

    // =========================================================
    // LOWER_BOUND
    // =========================================================

    auto lb = mp.lower_bound(2);
    // Returns iterator to first element with key >= 2

    cout << "Lower bound of key 2: " << lb->second << endl;

    // =========================================================
    // UPPER_BOUND
    // =========================================================

    auto ub = mp.upper_bound(2);
    // Returns iterator to first element with key > 2

    cout << "Upper bound of key 2: " << ub->second << endl;

    // =========================================================
    // ERASE FUNCTION
    // =========================================================

    mp.erase(1);
    // erase(key) removes ALL elements with key = 1

    cout << "After deleting key 1:" << endl;

    for (auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    mp.clear();
    // Removes all elements from multimap

    // =========================================================
    // EMPTY FUNCTION
    // =========================================================

    cout << "Is multimap empty? " << mp.empty() << endl;
    // Returns 1 if container is empty

    return 0;
}