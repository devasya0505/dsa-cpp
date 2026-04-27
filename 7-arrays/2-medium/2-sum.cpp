#include <iostream>
using namespace std;

int main()
{
  int a[] = {2, 6, 5, 8, 11}, target = 14;
  int n = sizeof(a) / sizeof(a[0]);

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] + a[j] == target)
      {
        cout << "yes\n";
        cout << "{" << i << "," << j << "}";
        return 0;
      }
    }
  }

  cout << "no";
  return 0;
}