#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  int ans = INT_MIN;
  int secondlargest = INT_MIN;
  for (int i = 0; i < 7; i++)
  {
    if (arr[i] > ans)
      ans = arr[i];
  }

  for (int i = 0; i < 7; i++)
  {
    if (arr[i] != ans)
      secondlargest = max(secondlargest, arr[i]);
  }
  cout << secondlargest;
}