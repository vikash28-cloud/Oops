
//constructor overloading 

//means two or more construcrtors with same name but different parameters

#include <iostream>
using namespace std;
class complex
{
    int a, b, c;

public:

    complex(int, int);
    complex(int);
    complex(int, int, int); 
    complex();

    void display()
    {
        cout << "a = " << a << "   "
             << "b = " << b << "   "
             << "c = " << c <<"    "
             <<endl;
    }
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
    c=0;
}
complex ::complex(int x)
{
    a = x;
    b=0;
    c=0;
}
complex ::complex(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
complex::complex()
{
    a=0;
    b=0;
    c=0;
}

int main()
{
    complex ob1(2, 3);
    ob1.display();

    complex ob2(2);
    ob2.display();

    complex ob3(2, 3, 5);
    ob3.display();

    complex ob4;
    ob4.display();
}