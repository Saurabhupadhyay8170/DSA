#include <iostream>
using namespace std;

// int main(){
//     for(int j=1;j<=4;j++){
//         for(int i=1; i<=5;i++){
//             cout<<"10"<<" ";
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == i)
                cout << "*" << " ";
            else
                cout << "  "; // two spaces for better alignment
        }
        cout << endl;
    }
}

