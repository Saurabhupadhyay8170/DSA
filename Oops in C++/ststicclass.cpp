//They are the attributes of classes or class number 
#include<iostream>
using namespace std;
 class Customer{
    string name;
    int account_number,balance;
    static int total_customer;
    public:
    Customer(string name, int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<" ";
    }
 };
  int Customer::total_customer=0;

 int main(){
      Customer A1("saurabh",1,1000);
      Customer A2("shailesh",2,1800);
      A1.display();
      A2.display();
      Customer A3("Mohan",3,2000);
      A3.display();
      A1.display();
      A2.display();
 }