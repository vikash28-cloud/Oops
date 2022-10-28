#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int imaginary;
    int real;
    public:
    void setdata(int r,int i)
    {
        real =r ;
        imaginary = i;
    }
    void getdata()
    {
        cout<<"the real part is: "<<real<<endl;
        cout<<"the imaginary part is: "<<imaginary<<"i"<<endl;
        
    }

};
int main()
{
    Complex ob1,ob2,ob3;
    // ob1.setdata(3,5);
    // ob1.getdata();

    cout<<"using pointer:-----"<<endl;
    Complex* ptr = &ob2;
    (*ptr).setdata(3,5);
    (*ptr).getdata();

    cout<<"using new operator:-------"<<endl;
    Complex *ptr1 = new Complex;
    (*ptr1).setdata(3,5);
    (*ptr1).getdata();

    cout<<"using arrow operator:-------"<<endl;
    Complex *ptr2= &ob3;
    ptr2->setdata(3,5);
    ptr2->getdata();

    cout<<"using new and arrow operator:-------"<<endl;
    Complex *ptr3= new Complex;
    ptr3->setdata(3,5);
    ptr3->getdata();


}