#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class values
{
    int a;
    int b;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
class calculator : public values
{

public:
    int sum()
    {
        return geta() + getb();
    }
    int sub()
    {
        return geta() - getb();
    }
    int multiply()
    {
        return geta() * getb();
    }
    float divide()
    {
        return float(geta()) / float(getb());
    }
};

class derived :  public calculator
{
public:
    
    void display()
    {
        cout << "the sum of " << geta() << " and " << getb() << " is " << sum() << endl;
        cout << "the subtraction of " << geta() << " and " << getb() << " is " << sub() << endl;
        cout << "the multiply of " << geta() << " and " << getb() << " is " << multiply() << endl;
        cout << "the divide of " << geta() << " and " << getb() << " is " << divide() << endl;
        

    }
};

int main()
{
    derived ob1;
    ob1.setdata(10,20);
    ob1.display();
}