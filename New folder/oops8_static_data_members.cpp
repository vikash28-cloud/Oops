#include<iostream>
using namespace std;
class employee
{
    int id;
    int static counter;
    
    public:
    void setid(void);
    void getid(void);
};
void employee :: setid(void)
{
    cout<<"enter the id: "<<endl;
    cin>>id;
    counter++;
}
void employee :: getid(void)
{
    cout<<"the id is : "<<id<<" and employee is: "<<counter<<endl;
}
int employee :: counter=1000;
int main()
{
    employee vikash;
    vikash.setid();
    vikash.getid();

    employee vikash1;
    vikash1.setid();
    vikash1.getid();

    employee vikash2;
    vikash2.setid();
    vikash2.getid();

    
    vikash.setid();
    vikash.getid();

}