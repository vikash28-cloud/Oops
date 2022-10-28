#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    public:
    complex(void);  //constructor declearation
    void printdata()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};

complex ::complex(void)
{
    a=10;
    b=20;
}

int main()
{
    complex ob1,ob2;
    ob1.printdata(); 
    cout<<endl;  
    ob2.printdata();
}

//characterstaics of constructor

/*complex(void) is a constructor , it is a default constructor 
because as it takes no parameters*/

// the name of constructor must be same of that class

//we dont need to call or invoke complex(void) function

//the value of a and b is automatically taken by object when object is created

// constructor should be decleared in the public section of the class

//they cannot return values, they dont have return type