#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
    sum(int ,int);      //parameterized constructor
    void print()
    {
        cout<<"the sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }

};
sum::sum(int x, int y)     //parameterized constructor , x and y are the formal parameters taken by constructor
{
    a=x;
    b=y;
}

int main()
{
    sum ob1(10,20);     // implicit call ||  passing actual parameters to the constructor     //type 1
    ob1.print();

    sum ob2 = sum(30,40);  // explicit call || passing actual parameters to the constructor   //type 2
    ob2.print();

    sum ob3;      /*error because sum is not a default constructor or constructor without parameters
                    but here the constructor is parameterized so, we have to pass parameters to the object
            



}