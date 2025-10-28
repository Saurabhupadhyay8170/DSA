#include<iostream>
using namespace std;
int main (){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<=5;i++){
        if(arr[i]%2==1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}