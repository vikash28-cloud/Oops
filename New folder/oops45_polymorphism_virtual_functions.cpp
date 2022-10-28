// using virtual function we  can access the derived class members using base class pointer

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    int x;
    virtual void display()
    {
        cout<<"the valuef x of base class is "<<x<<endl;
    }

};
class derived : public base
{
    public:
    int y;
    void display()
    {
        cout<<"the valuef x of base class is "<<x<<endl;
        cout<<"the value of y of derived class is "<<y<<endl;
        
    }
    void getdata(){}
};




int main()
{
    base *baseptr;
    base ob1;
    ob1.x=10;
    baseptr = &ob1;
    baseptr->display();      //base class display runs

    derived ob2;
    baseptr = &ob2;
    ob2.x=30;
    ob2.y=20;
    baseptr->display();     //now derived class display runs 

}