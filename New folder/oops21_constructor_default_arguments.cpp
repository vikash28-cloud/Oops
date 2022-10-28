
/*A default argument is a value provided in a function declaration that is automatically assigned by the compiler
 if the calling function doesn’t provide a value for the argument. 
 In case any value is passed, the default value is overridden. */

#include<iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
    
    simple(int x,int y=10,int z=9)          //y=10 is a default parameter ,in case if value of y is not passed 
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a and b and c  is : "<<a<<" ,"<<b<<" ,"<<c<<endl;
    }

};
int main()
{
    simple o1(2);   //only one argument is passed that by constructor takes default argument y=10
    o1.display();

}