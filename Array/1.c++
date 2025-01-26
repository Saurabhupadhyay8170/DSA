#include <iostream>
using namespace std;

int main()
{
  int n;

  // Ask the user for the number of elements in the array
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  // Create an array dynamically based on user input
  int arr[n];

  // Input elements into the array
  cout << "Enter " << n << " elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
  }

  // Print the array elements
  cout << "The elements of the array are: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
