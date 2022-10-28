#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    int x;
    void display()
    {
        cout<<"the value of x of base class is "<<x<<endl;
    }

};
class derived : public base
{
    public:
    int y;
    void display()
    {
        cout<<"the value of y of derived class is "<<y<<endl;
        cout<<"the value of x of base class is "<<x<<endl;
    }
};

int main()
{
    base *ptrBase;

    // base ob1;
    // ptrBase = &ob1;
    // ptrBase->x=10;
    // ptrBase->display();



    derived ob2;
    ptrBase = &ob2;        //base class pointer points to derived class object, this is valid in c++
    ptrBase->x=200;
    ptrBase->display();     //base class display function runs

    //ptrBase->derived::display();   //gives error
    // ptrBase->y=10;    //gives error beacuse pointer is of base class and y is of derived class
    // ptrBase->display();

    derived *ptrDerived;
    ptrDerived = &ob2;
    ptrDerived->y = 100;
    ptrDerived->display();      //derived class display calls
    ptrDerived->base::display();   //base class display call

    cout<<endl;

    ptrDerived->x=5000;
    ptrDerived->display();
    

}