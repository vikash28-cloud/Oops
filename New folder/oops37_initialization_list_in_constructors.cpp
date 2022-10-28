#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class test
{
private:
    int a;
    int b;

public:
    //test(int x, int y) : a(x), b(y)
    //test(int x, int y) : a(x), b(a+y)
    //test(int x, int y) : a(x), b(a * y)
    test(int x, int y) : b(y)
    {
        
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    test ob1(10, 20);
}