#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* ptr = new int(10);
    cout<<*(ptr)<<endl;

    string* p = new string("vikash");
    cout<<*(p)<<endl;

    int *p1 = new int[10];
    p1[0]=100;
    p1[1] =200;
    p1[2]=300;

    cout<<p1[0]<<endl;  //prints 100
    cout<<p1[1]<<endl;  //prints 200
    cout<<p1[2]<<endl;  //prints 300

    cout<<*(p1++)<<endl;    //prints 100
    cout<<*(p1++)<<endl;    //prints 100
    cout<<*(p1++)<<endl;    //prints 100


}