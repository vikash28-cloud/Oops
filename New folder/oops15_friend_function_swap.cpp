#include<iostream>
using namespace std;
class class2;
class class1
{
    int a;
    friend void exchange(class1 &,class2 &);
    public:
        void setdata(int val1)
        {
            a=val1;  
        }
        void print()
        {
            cout<<"the value of a is: "<<a<<endl;
        }
};

class class2
{
    int b;
    friend void exchange(class1 &,class2 &);
    public: 
        void setdata(int val2)
        {
            b= val2;
        }
        void print()
        {
            cout<<"the value os b is: "<<b<<endl;
        }
};

void exchange(class1 & o1,class2 & o2 )
{
    int temp;
    temp  = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    class1 s1;
    s1.setdata(10);
    class2 s2;
    s2.setdata(20);

    exchange(s1,s2);
    s1.print();
    s2.print();
}