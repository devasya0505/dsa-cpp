#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);

            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }

    return 0;
}


/*
****USING SET****

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);

            if ((n / i) != i)
            {
                st.insert(n / i);
            }
        }
    }

    for (auto it : st)
    {
        cout << it << " ";
    }

    return 0;
}
*/