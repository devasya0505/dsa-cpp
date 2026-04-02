#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1[] = {1, 1, 2, 3, 4, 5};
    int na1 = sizeof(a1) / sizeof(a1[0]);

    int a2[] = {2, 3, 4, 4, 5};
    int na2 = sizeof(a2) / sizeof(a2[0]);

    set<int> st;

    for (int i = 0; i < na1; i++)
    {
        st.insert(a1[i]);
    }

    for (int i = 0; i < na2; i++)
    {
        st.insert(a2[i]);
    }

    for (auto x : st)
    {
        cout << x << " ";
    }

    return 0;
}