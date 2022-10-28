#include<iostream>
using namespace std;
class employee{
    int a;
    int b;
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
        
    }
    void SetDataBySum(employee o1,employee o2)
    {
        a= o1.a +o2.a;
        b = o1.b+o2.b;
    }
    void display()
    {
        cout<<"the complex nummber is: "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    employee c1,c2,total;

    c1.setdata(2,3);
    c1.display();

    c2.setdata(1,2);
    c2.display();

    total.SetDataBySum(c1,c2);
    total.display();



}