#include <bits/stdc++.h> // Includes almost all standard C++ libraries
using namespace std;     // Allows us to use standard library names without std::

int main()
{
    // =========================================================
    // PRIORITY QUEUE (MAX HEAP)
    // By default, C++ priority_queue stores the LARGEST element at the top
    // =========================================================

    priority_queue<int> maxpq;
    // Create a priority queue of integers
    // This acts like a MAX HEAP (largest element always comes first)

    maxpq.push(10);
    // push() inserts element into the priority queue

    maxpq.push(5);
    // Insert another element

    maxpq.push(20);
    // Insert 20

    maxpq.push(15);
    // Insert 15
    // Internally the heap rearranges elements so the largest stays on top

    cout << "Top element in Max Heap: " << maxpq.top() << endl;
    // top() returns the highest priority element
    // Since this is a max heap → the largest element is returned

    cout << "Size of Max Heap: " << maxpq.size() << endl;
    // size() returns number of elements in the priority queue

    cout << "Elements removed from Max Heap: ";

    while (!maxpq.empty())
    // empty() checks whether the priority queue is empty
    // Loop continues until all elements are removed
    {
        cout << maxpq.top() << " ";
        // Print the current highest priority element

        maxpq.pop();
        // pop() removes the top element from the priority queue
    }

    cout << endl
         << endl;

    // =========================================================
    // PRIORITY QUEUE (MIN HEAP)
    // Here the SMALLEST element stays on the top
    // =========================================================

    priority_queue<int, vector<int>, greater<int>> minpq;
    /*
       priority_queue<Type, Container, Comparator>

       Type       → data type stored in queue (int)
       Container  → underlying container used (vector<int>)
       Comparator → defines priority order (greater<int> makes min heap)
    */

    minpq.push(10);
    // Insert 10 into min heap

    minpq.push(5);
    // Insert 5

    minpq.push(20);
    // Insert 20

    minpq.push(15);
    // Insert 15

    cout << "Top element in Min Heap: " << minpq.top() << endl;
    // top() returns the smallest element because we used greater<int>

    cout << "Size of Min Heap: " << minpq.size() << endl;
    // Returns number of elements currently stored

    cout << "Elements removed from Min Heap: ";

    while (!minpq.empty())
    // Continue until priority queue becomes empty
    {
        cout << minpq.top() << " ";
        // Print smallest element

        minpq.pop();
        // Remove that element from the heap
    }

    cout << endl
         << endl;

    // =========================================================
    // CHECKING WHETHER PRIORITY QUEUE IS EMPTY
    // =========================================================

    priority_queue<int> pq;
    // Create another priority queue

    pq.push(100);
    // Insert element

    pq.push(200);
    // Insert another element

    pq.pop();
    // Removes the largest element (200)

    pq.pop();
    // Removes the remaining element (100)

    if (pq.empty())
    // empty() returns true if there are no elements left
    {
        cout << "Priority Queue is empty" << endl;
    }
    else
    {
        cout << "Priority Queue is not empty" << endl;
    }

    return 0;
    // Program ends successfully
}