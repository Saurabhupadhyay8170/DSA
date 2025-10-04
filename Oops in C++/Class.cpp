#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age, roll_number;
    string grade;
    // function Getter and setter
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name";
            return;
        }
        name=s;
    }
    void setage(int a)
    {
if(age<0||age>100){
      
}
    }
};