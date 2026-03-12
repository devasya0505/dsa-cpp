#include <bits/stdc++.h> // Includes most standard C++ libraries
using namespace std;

int main()
{
    // =========================================================
    // UNORDERED_MAP DECLARATION
    // Stores data in KEY -> VALUE pairs
    // Keys are UNIQUE
    // Elements are NOT stored in sorted order
    // Implemented using HASH TABLE
    // Average Time Complexity for insert/find/erase = O(1)
    // =========================================================

    unordered_map<int, string> mp;
    // Create an unordered_map where:
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
    // Faster way to insert element

    mp[2] = "Pineapple";
    // If the same key is inserted again, the value gets UPDATED

    // =========================================================
    // PRINTING ELEMENTS
    // =========================================================

    cout << "Unordered Map elements:" << endl;

    for (auto it : mp)
    // Range-based loop to traverse unordered_map
    {
        cout << it.first << " -> " << it.second << endl;
        // it.first  = key
        // it.second = value
        // Order may change every time because unordered_map is NOT sorted
    }

    // =========================================================
    // ACCESSING ELEMENT
    // =========================================================

    cout << "Value of key 3: " << mp[3] << endl;
    // Access value using key

    // =========================================================
    // SIZE FUNCTION
    // =========================================================

    cout << "Size of unordered_map: " << mp.size() << endl;
    // Returns number of key-value pairs

    // =========================================================
    // FIND FUNCTION
    // =========================================================

    auto it = mp.find(4);
    // find(key) returns iterator pointing to that key
    // If key does not exist, it returns mp.end()

    if (it != mp.end())
    {
        cout << "Key 4 found with value: " << it->second << endl;
    }

    // =========================================================
    // COUNT FUNCTION
    // =========================================================

    cout << "Count of key 2: " << mp.count(2) << endl;
    // Returns 1 if key exists
    // Returns 0 if key does not exist

    // =========================================================
    // ERASE FUNCTION
    // =========================================================

    mp.erase(1);
    // Removes key 1 and its value from the map

    cout << "After deleting key 1:" << endl;

    for (auto x : mp)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    // =========================================================
    // CLEAR FUNCTION
    // =========================================================

    mp.clear();
    // Removes all elements from unordered_map

    // =========================================================
    // EMPTY FUNCTION
    // =========================================================

    cout << "Is unordered_map empty? " << mp.empty() << endl;
    // Returns 1 if map is empty

    return 0; // Program ends successfully
}