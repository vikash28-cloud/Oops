#include<iostream>
using namespace std;


// wrong method------------------//
class complex
{
    int c=20;
    public:
    int a=21;
    int b=31;
    
    
};

int main()
{
    complex x;
    cout<<x.a<<endl;
    cout<<x.b<<endl;
    cout<<x.c<<endl;


}




// corect method ---------------------//


// class complex
// {
//     int c;
//     public:
//     int a;
//     int b;
//     void setdata(int a1,int a2,int a3)
//     {
//         a=a1;
//         b=a2;
//         c=a3;
//     }
//     void getdata()
//     {
//         cout<<"the value of a is: "<<a<<endl;
//         cout<<"the value of b is: "<<b<<endl;
//         cout<<"the value of c is: "<<c<<endl;

//     }
// };

// int main()
// {
//     complex x;
//     x.setdata(12,34,11);
//     x.getdata();


// }
