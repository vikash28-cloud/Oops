#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class shop
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Id of the item is: " << id << endl;
        cout << "Price of the item is: " << price << endl;
    }
};
int main()
{

    int size = 3;
    shop *ptr = new shop[size];
    shop *TempPtr = ptr;
    int p, q, i;
    for (i = 0; i < size; i++)
    {
        cout << "enter the id and price of item: " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).sedata();
        ptr->setdata(p, q);
        ptr++; // when i is equal to less than size, the pointer ptr++ is incremented
    }

    for (i = 0; i < size; i++)
    {
        cout << "item number: " << i + 1 << endl;
        TempPtr->getdata();
        TempPtr++;
    }
}

// in first loop on last iteration ptr value get incrementd so we store pointer ptr
// in temporary pointer for the second loop