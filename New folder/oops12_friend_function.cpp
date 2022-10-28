#include<iostream>
using namespace std;

class complex 
{
    int a,b;
    friend complex sum(complex o1, complex o2);
    public:
    
        void setdata(int v1, int v2)
        {
            a=v1;
            b=v2;
        }
        
        void display()
        {
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sum(complex o1,complex o2)
{
    complex s;
    s.setdata((o1.a+o2.a),(o1.b+o2.b));
    return s;
}

int main()
{
    complex c1,c2,total;
    c1.setdata(1,2);
    c1.display();

    c2.setdata(3,9);
    c2.display();

    total= sum(c1,c2);
    total.display();


}