#include<iostream>
using namespace std;
class y;
class x
{
    int data1;
    friend void sum(x,y);
    public:
    void setdata(int value)
    {
        data1=value;
    }

};

class y
{
    int data2;
    friend void sum(x,y);
    public:
    void setdata(int value)
    {
        data2= value;
    }
};

void sum(x o1,y o2)
{
    int total = o1.data1+o2.data2;
    cout<<"the sum is : "<<total<<endl;

}
int main()
{
    x a1;
    a1.setdata(10);
    y b1;
    b1.setdata(20);
    sum(a1,b1);


}