#include<iostream>
using namespace std;

class Customer{
    string name;
    int *data;

    public:
    Customer(){
        name="Rohit";
        data=new int; //dynamic memory allocation
        *data=10;
        cout<<"constructor is called \n";
    }
    //destructor is called
    ~Customer(){
        delete data;
        cout<<"Destructor is called\n";
    }
};
int main(){
   Customer A1;
}
