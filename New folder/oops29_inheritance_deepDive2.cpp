#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : private base    //in this visibility is private
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    setdata();                     //set data is priavte for derived class so we cannot access it directly
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data1 is " << data2 << endl;
    cout << "the value of data1 is " << data3 << endl;
}

int main()
{
    derived ob1;
    
    ob1.process();
    ob1.display();
}

//here we access the setdata function by public member functon of derived class