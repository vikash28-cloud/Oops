#include<iostream>
using namespace std;
class complex;

class calculator
{
    public:
    int realsum(complex,complex);
    int complexsum(complex,complex);
    
};

class complex{
    
    int a,b;

    //Aliter: Declearing the entire calculator class as friend; -->check in  oops14_class_friend1.cpp
    friend class calculator;
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void print()
        {
            cout<<"the complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
    
};

int calculator ::  realsum(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculator ::complexsum(complex o1,complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    complex sum1,sum2;
    sum1.setdata(3,4);
    sum1.print();
    sum2.setdata(1,2);
    sum2.print();

    calculator total;

    int res = total.realsum(sum1 , sum2);
    cout<<"the sum of real numbers of complex number is :" <<res<<endl;

    int res1 = total.complexsum(sum1,sum2);
    cout<<"the sum of complex number of complex numberis: "<<res1<<"i"<<endl;

    return 0;
}