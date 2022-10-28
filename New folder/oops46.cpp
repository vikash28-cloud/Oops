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
    
    derived ob1;
    ob1.base::display();
    

}