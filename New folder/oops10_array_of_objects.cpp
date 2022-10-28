#include<iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    public:
    void setinfo()
    {
        cout<<"enter the id: ";
        cin>>id;
        cout<<"enter the salary: ";
        cin>>salary;

    }
    void getinfo()
    {
        cout<<"the id is "<<id<<" and salary is "<<salary<<endl;
    }
};
int main()
{
    employee info[4];
    for (int i = 0; i < 4; i++)
    {
        info[i].setinfo();
        info[i].getinfo();
    }
    
}