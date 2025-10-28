#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,6,5,4,3};
    int n=sizeof(arr[0]);
    int unique=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        if(i=j)
        continue;
        if(arr[i]=arr[j])
        break;
       }
       if (unique==1)
       cout<<unique<<" ";
    }
    return 0;
}