#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int minelement = arr[0];
  for (int i = 1; i < 5; i++)
  {
    if (arr[i] < minelement)
    {
      minelement = arr[i];
    }
  }
  cout << minelement;
}