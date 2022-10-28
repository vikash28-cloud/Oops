#include<iostream>
using namespace std;
class base
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

};
class derived:protected base{   //b and c are protectedly inherited in derived class
    public:
    
    void setdata()
    {
       // a=30;       //private member of base class
        b=10;       //protected member of base class
        c=20;       //public member of base class
    }
    
};
int main()
{
    derived ob1;
    ob1.setdata();
    
    cout<<ob1.b<<endl;    //error
    cout<<ob1.c<<endl;      //error
    



}
/*c is a public member of base class and it is derived protectedly
in derived class so ob1.c shows error

 b is a protected member of base class and it is derive protectedly
in derived class so ob1.b shows error 

because we cannot access protected members directly
*/