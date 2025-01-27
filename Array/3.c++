#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int maxelement = INT_MIN;
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > maxelement)
    {
      maxelement = arr[i];
    }
  }
  cout << maxelement;
}