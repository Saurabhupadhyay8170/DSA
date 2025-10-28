#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {7, 11, -2, 8, 170, 0, 11,-4};
    int Min_NUm = arr[0];
    for (int i = 1; i < 8; i++)
    {
        if (Min_NUm > arr[i])
        {
            Min_NUm = arr[i];
        }
    }
    cout << Min_NUm << endl;
    return 0;
}