//generally ambiguity problem occurs in multiple inheritance

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"this is the function of class A"<<endl;
    }
};
class B
{
    public:
    void func()
    {
        cout<<"this is thr function of class B"<<endl;
    }

};

class derived :public A,public B
{
    public:
    void display()
    {

        //func();               // ambiguous error occurs 

        A::func();               //resolve ambiguity error
    }

};
int main()
{
    derived ob1;
    ob1.display();

   // ob1.func();            //shows ambiguity error
    ob1.B::func();             //resolve ambiguity error

}