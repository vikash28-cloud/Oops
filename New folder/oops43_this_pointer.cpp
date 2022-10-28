#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class example
{
    int a;
    public:
    void setdata(int a);
    void getdat();

};
void example::setdata(int a)
{
    this->a=a;
}
void example::getdat()
{
    cout<<"the value of a is "<<a<<endl;
}
int main()
{
    example ob1;
    ob1.setdata(10);
    ob1.getdat();


}