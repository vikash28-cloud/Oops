#include <iostream>
using namespace std;
class number
{
    int num;

public:
    number()
    {
        num = 0;
    }
    number(int n);
    number(number &); // copy constructor declearation
    void disiplay()
    {
        cout << "the number is : " << num << endl;
    }
};

number::number(int n)
{
    num = n;
}

number::number(number &obj) // copy constructor defining
{
    cout<<"copy constructor called "<<endl;
    num = obj.num;
}


int main()
{
    number o1(10), o2;
    o1.disiplay();

    o2 = number(o1);
    o2.disiplay();
}