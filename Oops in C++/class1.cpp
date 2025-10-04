#include<iostream>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;
    
    public:
    //default Constructor
   Customer()
   {
    name ="Rohit";
    account_number=5;
    balance=100;
   }
   ///parameterized constructor
    Customer(string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;

    }
   
   void display(){
    cout<<" "<<account_number<<" "<<balance<<endl;
   }
};
int main(){
    Customer A1;
    Customer A2("Rohit",23,1000);
    A1.display();
    A2.display();


}