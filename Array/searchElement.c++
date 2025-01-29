#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  int Element = 8;
  int ans;
  for (int i = 0; i < 7; i++)
  {
    if (arr[i] == Element)
    {
      ans = i;
      break;
    }
    else
    {
      ans = -1;
    }
  }
  cout << ans;
}
