#include<iostream>
using namespace std;

class employee
{

};
int main()
{
    employee vikash;

    cout<<sizeof(vikash);
    //the employee is a empty class but the object vikash of employee class is created so 1 byte is allocated to it
    //if we do not creat a object of this class so no memmory is allocated for this class

}