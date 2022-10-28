#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
case1:
class A:public B
{
    the order of constructor execution is -> B() then A()
}
case2:
class c:public B,public A
{
    the order of constructor execution is -> B() then A() then c()
}

case3:
class c :public B.public virtual A
{
    the order of constructor execution  is -> A() then B() then C()
}
*/

class base1
{
private:
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void getdata1()
    {
        cout << "the value of data1 is: " << data1 << endl;
    }
};
class base2
{
private:
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called" << endl;
    }
    void getdata2()
    {
        cout << "the value of data2 is: " << data2 << endl;
    }
};
class derived : public base1, public base2 // first base1 constr. is called then base2 then derived
{
    int derived1;
    int derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor is called" << endl;
    }
    void getdata()
    {
        cout << "the value of derived1 is : " << derived1 << endl;
        cout << "the value of derived2 is : " << derived2 << endl;
    }
};

int main()
{
    derived ob1(10, 20, 30, 40);
    //ob1.getdata1();
    ob1.getdata2();
    ob1.getdata();
}