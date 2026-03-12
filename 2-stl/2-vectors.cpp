#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Empty vector
    vector<int> v; // {}

    // Insert elements
    v.push_back(1);    // {1}
    v.emplace_back(2); // {1,2} (faster than push_back)

    // Vector of pairs
    vector<pair<int, int>> v2;

    v2.push_back({1, 2});  // insert pair
    v2.emplace_back(3, 4); // faster insertion

    // Different ways to initialize vectors
    vector<int> vA(5, 100); // {100,100,100,100,100}

    vector<int> vB(5); // {0,0,0,0,0}

    vector<int> v1(5, 20); // {20,20,20,20,20}

    vector<int> v3(v1); // copy vector v1 into v3

    // ===============================
    // Access elements using iterator
    // ===============================

    vector<int>::iterator it = v1.begin(); // points to first element

    it++;                // move iterator forward
    cout << *it << endl; // print second element

    it = it + 2; // move 2 positions ahead
    cout << *it << endl;

    // Reverse iterator
    vector<int>::reverse_iterator rit = v1.rbegin(); // last element
    cout << *rit << endl;

    // ===============================
    // Accessing elements directly
    // ===============================

    cout << v1[0] << " " << v1.at(0) << endl; // both access first element

    cout << v1.back() << endl; // last element

    // ===============================
    // Traversing vector
    // ===============================

    // Method 1: iterator
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Method 2: auto keyword
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    // Method 3: range-based loop
    for (auto element : v1)
    {
        cout << element << " ";
    }

    cout << endl;

    // ===============================
    // Deleting elements
    // ===============================

    vector<int> v4 = {10, 20, 12, 23};

    v4.erase(v4.begin() + 1);
    // removes 20 -> {10,12,23}

    v4.erase(v4.begin() + 1, v4.begin() + 2);
    // removes 12 -> {10,23}

    // ===============================
    // Insert elements
    // ===============================

    vector<int> v5(2, 100);
    // {100,100}

    v5.insert(v5.begin(), 300);
    // {300,100,100}

    v5.insert(v5.begin() + 1, 2, 10);
    // {300,10,10,100,100}

    vector<int> copy(2, 50);
    // {50,50}

    v5.insert(v5.begin(), copy.begin(), copy.end());
    // {50,50,300,10,10,100,100}

    // ===============================
    // Other useful functions
    // ===============================

    cout << v5.size() << endl; // number of elements

    v5.pop_back(); // removes last element

    vector<int> v6 = {10, 20};
    vector<int> v7 = {30, 40};

    v6.swap(v7);
    // v6 -> {30,40}
    // v7 -> {10,20}

    v5.clear();
    // remove all elements

    cout << v5.empty();
    // returns 1 (true) if vector is empty

    return 0;
}