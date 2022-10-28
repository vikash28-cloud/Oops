#include<iostream>
using namespace std;
int count =0;
class google
{
    
    public:
    google()
    {
        count++;
        cout<<"the constructor is called for object "<<count<<endl;

    }
    ~google()
    {
        count--;
        cout<<"the destructor is called fo object "<<count<<endl;
    }

};
int main()
{
    cout<<"enter the main function"<<endl;
    cout<<"creating first object"<<endl;
    google vikash;
    {
        cout<<"enter this block"<<endl;
        cout<<"creating two or more object"<<endl;
        google ob1,ob2;
        cout<<"exiting from this block"<<endl;

    }
    cout<<"back to main"<<endl;
    

}

/*
1. Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 

2.Destructor has the same name as their class name preceded by a tiled (~) symbol.

3.It is not possible to define more than one destructor. 

4.The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.

5.Destructor neither requires any argument nor returns any value.

6.It is automatically called when object goes out of scope. 

7.Destructor release memory space occupied by the objects created by constructor.

8.In destructor, objects are destroyed in the reverse of an object creation.
 */