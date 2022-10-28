#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int* ptr = &a;

    cout<<ptr<<endl;      //prints the garbaage value
    cout<<*(ptr)<<endl;   //prints 10
    cout<<*(ptr)+1<<endl;    //prints 11  
    cout<<*(&a)<<endl;   //prints 10

    int arr[3] = {100,200,300};
    int* ptr1 = arr;

    cout<<*(ptr1)<<endl;  //prints arr[0] = 100
    cout<<*(++ptr1)<<endl;  //prints arr[1]  = 200
    cout<<*(++ptr1)<<endl;  //prints arr[2] = 300

}