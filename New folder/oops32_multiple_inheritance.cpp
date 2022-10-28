#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class base1
{
    protected:
    int base1var;
    public:
    void setdata(int a)
    {
        base1var = a;
    }
};
class base2
{
    protected:
    int base2var;
    public:
    void setdata2(int b)
    {
        base2var = b;
    }
};
class derived :public base1, public base2      //mutiple inherrited class
{
    public:
    void display()
    {
        cout<<"the value of base1var = "<<base1var<<endl;
        cout<<"the value of base2var = "<<base2var<<endl;;
        cout<<"the sum of base1var and base2var = "<<base1var+base2var<<endl;
    }

};
int main()
{
    derived ob1;
    ob1.setdata(10);
    ob1.setdata2(20);
    ob1.display();


}