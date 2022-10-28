#include<iostream>

using namespace std;
class vikash{
    public:
    vikash(); //constructor
    ~vikash(); //destructor
};
vikash::vikash()
{
    cout<<"constructor is created for one object"<<endl;
}
vikash::~vikash()
{
    cout<<"destructor destructts the  one object"<<endl;
}
int main()
{
    vikash ob1; 
} 