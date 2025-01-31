//
#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return i; // Return index where element is found
    }
  }
  return -1; // Return -1 if element is not found
}

int main()
{
  int n, x;

  // Input array size
  cout << "Enter the size of array: ";
  cin >> n;

  int arr[n]; // Array declaration

  // Input array elements
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Input element to search
  cout << "Enter the element to search: ";
  cin >> x;

  // Perform Linear Search
  int result = linearSearch(arr, n, x);

  // Output the result
  if (result != -1)
  {
    cout << "Element found at index: " << result << endl;
  }
  else
  {
    cout << "Element not found" << endl;
  }

  return 0;
}
