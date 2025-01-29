#include <iostream>
using namespace std;

int main()
{
  int arr[8] = {1, 2, 4, 5, 6, 7, 8};
  int sum = 0;
  for (int i = 0; i < 8; i++)
    sum += arr[i];

  int ans = 8 * (8 + 1) / 2;
  cout << ans - sum;
}