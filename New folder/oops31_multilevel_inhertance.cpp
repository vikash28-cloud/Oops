#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void setroll_no(int r);
    void getroll_no();
};
void student::setroll_no(int r)
{
    roll_no = r;
}
void student::getroll_no()
{
    cout << "your roll number is: " << roll_no << endl;
}

class marks : public student
{
protected:
    int maths;
    int physics;

public:
    void setmarks(int, int);
    void getmarks();
};

void marks ::setmarks(int m1, int m2)
{
    physics = m1;
    maths = m2;
}
void marks::getmarks()
{
    cout << "marks in physics is : " << physics << endl;
    cout << "marks in maths is: " << maths << endl;
}

class result : public marks
{
private:
    float per;

public:
    void display()
    {
        getroll_no();
        getmarks();
        cout << "your percantage is : " << ((physics + maths) / 2) << endl;
    }
};
int main()
{
    result vikash;
    vikash.setroll_no(1001);
    vikash.setmarks(87.0, 79.0);
    vikash.display();
}