#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[10];
    arr[1] = 200;
    arr[0] = 100;
    arr[2] = 300;

    cout << "before using delete keyword" << endl
         << arr[0] << endl; // prints 100
    cout << arr[1] << endl; // prints 200
    cout << arr[2] << endl; // prints 300

    delete[] arr;
     // or
    //delete arr;

    cout << "after using delete keyword" << endl;
    cout << arr[0] << endl; // prints 100
    cout << arr[1] << endl; // prints 200
    cout << arr[2] << endl; // prints 300
}