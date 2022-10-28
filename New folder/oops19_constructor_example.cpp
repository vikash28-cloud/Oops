#include <iostream>
#include <math.h>
using namespace std;
class cordinates
{
    int a, b;
    friend cordinates distance(cordinates, cordinates);

public:
    cordinates(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the cordinates are (" << a << " , " << b << ")" << endl;
    }
};

cordinates distance(cordinates o1, cordinates o2) // friend function
{
    int d;
    d = ((o2.a - o1.a) * (o2.a - o1.a)) + ((o2.b - o1.b) * (o2.b - o1.b));
    int t = sqrt(d);
    cout << t << endl;
}
int main()
{
    cordinates c1(5, 3);
    c1.display();
    cordinates c2(5, 3);
    c2.display();
    distance(c1, c2);
}

// program is correct run on another ide